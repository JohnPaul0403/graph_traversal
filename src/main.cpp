#include "../include/graph.h"

int main(int argc, char *argv[]) {
  Graph graph(10);
  graph.createGraph();
  graph.printMatrix();
  graph.dfs(0);

  return 0;
}
