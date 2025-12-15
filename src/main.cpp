#include "../include/graph.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Graph graph(10);
  graph.createGraph();
  graph.printMatrix();

  // DFS Traversal
  std::cout << "Graph traversal via DFS: \n";
  graph.dfs(0);

  std::cout << "Graph traversal via BFS: \n";
  graph.bfs(0);

  std::cout << "Shortest path from 1 to 5\n";
  graph.shortestPath(1, 5);

  return 0;
}
