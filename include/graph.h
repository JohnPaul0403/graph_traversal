#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph {
  int V;
  std::vector<std::vector<bool>> matrix;

public:
  Graph(int);
  void addEdge(int, int);
  void createGraph();
  void dfs(int);
  void bfs(int);
  void shortestPath(int, int);
  void printMatrix();
};

#endif // !GRAPH_H
