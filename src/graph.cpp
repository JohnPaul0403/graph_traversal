#include "../include/graph.h"
#include <iostream>
#include <random>
#include <stack>

Graph::Graph(int vertices)
    : V(vertices), matrix(vertices, std::vector<bool>(vertices, false)) {}

void Graph::addEdge(int v, int e) {
  matrix[v][e] = true;
  matrix[e][v] = true;
}

void Graph::createGraph() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<double> dist(0.0, 1.0);

  // Create the graph
  for (int i = 0; i < V; i++) {
    for (int j = i + 1; j < V; j++) {
      if (dist(gen) < 0.5) {
        matrix[i][j] = true;
        matrix[j][i] = true;
      }
    }
  }
}

void Graph::dfs(int start = 0) {
  std::stack<int> stacked;
  std::vector<bool> visited(V, false);
  int v;

  stacked.push(start);

  while (!stacked.empty()) {
    v = stacked.top();
    stacked.pop();

    if (visited[v])
      continue;

    visited[v] = true;
    std::cout << "Visited: " << v << "\n";

    // Traversing through current to find vertices
    for (int i = 0; i < V; i++) {
      if (matrix[v][i] && !visited[i])
        stacked.push(i);
    }
  }
}

void Graph::printMatrix() {
  std::cout << "\nAdjacency Matrix (" << V << " vertices):\n";
  std::cout << "   ";
  for (int i = 0; i < V; i++)
    std::cout << i << " ";
  std::cout << "\n";

  for (int i = 0; i < V; i++) {
    std::cout << i << ": ";
    for (int j = 0; j < V; j++) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << "\n";
  }
}
