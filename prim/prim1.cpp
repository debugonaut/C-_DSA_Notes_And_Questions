#include <iostream>
#include <climits>

using namespace std;

// Function to find minimum key vertex
int findMinVertex(int key[], bool visited[], int V) {

    int min = INT_MAX;
    int minIndex;

    for(int i = 0; i < V; i++) {

        // Select unvisited vertex with minimum key
        if(visited[i] == false && key[i] < min) {

            min = key[i];
            minIndex = i;
        }
    }

    return minIndex;
}

// Prim's Algorithm
void prims(int V, int graph[][100]) {

    int parent[100];
    int key[100];
    bool visited[100];

    // Initialization
    for(int i = 0; i < V; i++) {

        key[i] = INT_MAX;
        visited[i] = false;
    }

    // Start from vertex 0
    key[0] = 0;
    parent[0] = -1;

    // MST will contain V-1 edges
    for(int count = 0; count < V - 1; count++) {

        // Pick minimum key vertex
        int u = findMinVertex(key, visited, V);

        visited[u] = true;

        // Update adjacent vertices
        for(int v = 0; v < V; v++) {

            if(graph[u][v] &&
               visited[v] == false &&
               graph[u][v] < key[v]) {

                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
// Print MST
cout << "\nMinimum Spanning Tree:\n";
cout << "Edge \tWeight\n";

int total = 0;

for(int i = 1; i < V; i++) {

    cout << parent[i]
         << " - "
         << i
         << "\t"
         << graph[i][parent[i]]
         << endl;

    // Add edge weight to total
    total += graph[i][parent[i]];
}

cout << "\nTotal Cost of MST = " << total;
}

int main() {

    int V;
    cin >> V;

    int graph[100][100];

    cout << "Enter adjacency matrix:\n";

    // Input graph from user
    for(int i = 0; i < V; i++) {

        for(int j = 0; j < V; j++) {

            cin >> graph[i][j];
        }
    }

    prims(V, graph);

    return 0;
}