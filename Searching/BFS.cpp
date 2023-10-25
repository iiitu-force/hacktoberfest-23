#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform Breadth-First Search on a graph
void BFS(const vector<vector<int>>& graph, int source) {
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);
    
    queue<int> q;
    q.push(source);
    visited[source] = true;

    cout << "Breadth-First Traversal starting from node " << source << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Visit all unvisited neighbors of the current node
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout << endl;
}

int main() {
    int numNodes, numEdges;
    
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    cout << "Enter the number of edges: ";
    cin >> numEdges;

    vector<vector<int>> graph(numNodes);

    cout << "Enter the edges (e.g., node1 node2):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int node1, node2;
        cin >> node1 >> node2;

        // Add edges to the graph (for undirected graph, add both directions)
        graph[node1].push_back(node2);
        graph[node2].push_back(node1); // For an undirected graph
    }

    int sourceNode;
    cout << "Enter the source node for BFS: ";
    cin >> sourceNode;

    // Call the BFS function to perform BFS starting from the source node
    BFS(graph, sourceNode);

    return 0;
}
