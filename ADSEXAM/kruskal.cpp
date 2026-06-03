#include <iostream>
#include <algorithm>

using namespace std;

// Edge structure
struct Edge {

    int src;
    int dest;
    int weight;
};

// Sort edges according to weight
bool compare(Edge a, Edge b) {

    return a.weight < b.weight;
}

// Find parent of vertex
int findParent(int parent[], int v) {

    // Vertex is its own parent
    if (parent[v] == v)
        return v;

    // Recursively find main parent
    return findParent(parent, parent[v]);
}

// Kruskal's Algorithm
void kruskal(Edge edges[], int V, int E) {

    // Sort all edges according to weight
    sort(edges, edges + E, compare);

    int parent[V];

    // Initially every vertex
    // is parent of itself
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;
    int total = 0;

    cout << "\nMinimum Spanning Tree:\n";

    // MST contains V-1 edges
    while (count < V - 1) {

        // Pick current smallest edge
        Edge current = edges[i];

        // Find parents
        int srcParent =
            findParent(parent, current.src);

        int destParent =
            findParent(parent, current.dest);

        // If cycle not formed
        if (srcParent != destParent) {

            // Print edge
            cout << current.src
                 << " - "
                 << current.dest
                 << " : "
                 << current.weight
                 << endl;

            // Add weight to total
            total += current.weight;

            // Union operation
            parent[srcParent] = destParent;

            count++;
        }

        i++;
    }

    cout << "\nTotal Cost = "
         << total;
}

int main() {

    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    Edge edges[E];

    cout << "Enter source destination weight:\n";

    // Input all edges
    for (int i = 0; i < E; i++) {

        cin >> edges[i].src
            >> edges[i].dest
            >> edges[i].weight;
    }

    // Call Kruskal Algorithm
    kruskal(edges, V, E);

    return 0;
}

/*

PSEUDOCODE ALGORITHM

Algorithm FindParent(parent, v)

1. If parent[v] == v
       Return v

2. Else
       Return FindParent(parent, parent[v])

------------------------------------------------

Algorithm Kruskal(edges, V, E)

1. Sort all edges in increasing order of weight

2. Create parent array

3. For each vertex i from 0 to V-1
       parent[i] = i

4. count = 0
   total = 0
   i = 0

5. While count < V-1

       current = edges[i]

       srcParent = FindParent(parent, current.src)

       destParent = FindParent(parent, current.dest)

       If srcParent != destParent

            Print current edge

            total = total + current.weight

            parent[srcParent] = destParent

            count++

       i++

6. Print total cost

------------------------------------------------

Time Complexity:
O(E log E)

Where:
E = Number of edges

*/