#include <iostream>
#include <vector>
using namespace std;

// Graph class
class Graph {
private:
    int vertices;                       
    vector<vector<int>> adjMatrix;      
    vector<vector<int>> adjList;        

public:
    Graph(int v) {
        vertices = v;

        adjMatrix.resize(vertices, vector<int>(vertices, 0));

        adjList.resize(vertices);
    }

    void addEdge(int u, int v, bool isDirected = false) {
        adjMatrix[u][v] = 1;
        if (!isDirected) {
            adjMatrix[v][u] = 1;
        }
        adjList[u].push_back(v);
        if (!isDirected) {
            adjList[v].push_back(u);
        }
    }
    void displayAdjMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertices; ++i) {
            for (int j = 0; j < vertices; ++j) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void displayAdjList() {
        cout << "Adjacency List:" << endl;
        for (int i = 0; i < vertices; ++i) {
            cout << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices = 5;
    Graph graph(vertices);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.displayAdjMatrix();
    cout << endl;
    graph.displayAdjList();

    return 0;
}