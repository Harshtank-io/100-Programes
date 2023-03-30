// WAP to implement a DFS traversal technique in a Graph.

#include <iostream>
#include <vector>

using namespace std;

void dfsUtil(int node, vector<bool> &visted, vector<vector<int>> &graph)
{
    // mark the cuurrent node as visited
    visited[node] = true;
    cout << node << " ";

    // recursively visit all adjecent nodes that are not yet visited
    for (int adjNode : graph[node])
    {
        if (!visited[adjNode])
        {
            dfsUtil(adjNode, visited, graph);
        }
    }
}

// function to perform DFS traverl of the entrie graph
void dfs(vector<vector<int>> &graph)
{
    int numNode = graph.size();
    vector<bool> visited(numNode, false);

    // call dfsUtil() for each unvisited node in the graph
    for (int i = 0; i < numNode; i++)
    {
        if (!visited[i])
        {
            dfsUtil(i, visited, graph);
        }
    }
}

int main()
{
    vector<vector<int>> graph = {{1, 2},
                                 {0, 2, 3},
                                 {0, 1, 3},
                                 {1, 2}};

    dfs(graph);

    return 0;
}