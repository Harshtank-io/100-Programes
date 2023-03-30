// WAP to implement a BFS traversal technique in a Graph.
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &graph, int startNode)
{

    int n = graph.size();

    vector<bool> visited(n, false);

    queue<int> q;

    visited[startNode] = true;

    q.push(startNode);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{

    // create a graph as an adjcent list
    vector<vector<int>> graph = {{1, 2}, {0, 2, 3}, {0, 1, 3}, {1, 2, 4}, {3}};
    int startNode = 0;
    bfs(graph, startNode);

    cout << endl;
    return 0;
}

// done