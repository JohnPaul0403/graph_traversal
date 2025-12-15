#include "../include/graph.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Graph graph(20);
  graph.createGraph();
  graph.printMatrix();

  // DFS Traversal
  std::cout << "Graph traversal via DFS: \n";
  graph.dfs(0);

  std::cout << "Graph traversal via BFS: \n";
  graph.bfs(0);

  std::cout << "Shortest path from 2 to 18\n";
  graph.shortestPath(2, 18);

  return 0;
}
