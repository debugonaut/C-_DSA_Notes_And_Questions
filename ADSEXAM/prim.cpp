#include <iostream>
#include <climits>

using namespace std;

// Find minimum key vertex
int findMinVertex(int key[],
                  bool visited[],
                  int V) {

    int min = INT_MAX;
    int minIndex;

    for (int i = 0; i < V; i++) {

        // Select smallest unvisited vertex
        if (visited[i] == false &&
            key[i] < min) {

            min = key[i];
            minIndex = i;
        }
    }

    return minIndex;
}

// Prim's Algorithm
void prims(int graph[][100], int V) {

    int parent[100];
    int key[100];
    bool visited[100];

    // Initialization
    for (int i = 0; i < V; i++) {

        key[i] = INT_MAX;
        visited[i] = false;
    }

    // Start from vertex 0
    key[0] = 0;

    // Root has no parent
    parent[0] = -1;

    // MST contains V-1 edges
    for (int count = 0;
         count < V - 1;
         count++) {

        // Pick minimum key vertex
        int u =
            findMinVertex(key,
                          visited,
                          V);

        // Include vertex in MST
        visited[u] = true;

        // Update adjacent vertices
        for (int v = 0; v < V; v++) {

            if (graph[u][v] &&
                visited[v] == false &&
                graph[u][v] < key[v]) {

                parent[v] = u;

                key[v] = graph[u][v];
            }
        }
    }

    int total = 0;

    cout << "\nMinimum Spanning Tree:\n";

    // Print MST
    for (int i = 1; i < V; i++) {

        cout << parent[i]
             << " - "
             << i
             << " : "
             << graph[i][parent[i]]
             << endl;

        total += graph[i][parent[i]];
    }

    cout << "\nTotal Cost = "
         << total;
}

int main() {

    int V;

    cout << "Enter number of vertices: ";
    cin >> V;

    int graph[100][100];

    cout << "Enter adjacency matrix:\n";

    // Input graph
    for (int i = 0; i < V; i++) {

        for (int j = 0; j < V; j++) {

            cin >> graph[i][j];
        }
    }

    // Call Prim's Algorithm
    prims(graph, V);

    return 0;
}

/*

PSEUDOCODE ALGORITHM

Algorithm FindMinVertex(key, visited, V)

1. min = infinity

2. For i = 0 to V-1

       If visited[i] == false
       AND key[i] < min

            min = key[i]
            minIndex = i

3. Return minIndex

------------------------------------------------

Algorithm Prims(graph, V)

1. Create arrays:
       parent[V]
       key[V]
       visited[V]

2. For each vertex i

       key[i] = infinity
       visited[i] = false

3. key[0] = 0
   parent[0] = -1

4. Repeat V-1 times

       u = FindMinVertex(key,
                         visited,
                         V)

       visited[u] = true

       For each vertex v

            If graph[u][v] exists
            AND visited[v] == false
            AND graph[u][v] < key[v]

                 parent[v] = u
                 key[v] = graph[u][v]

5. Print MST edges using parent array

6. Print total cost

------------------------------------------------

Time Complexity:
O(V²)

Where:
V = Number of vertices

*/