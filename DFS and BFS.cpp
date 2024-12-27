#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph {
private:
    int vertices;                     
    vector<vector<int>> adjList;       

public:
    Graph(int v) {
        vertices = v;
        adjList.resize(vertices);
    }

    void addEdge(int u, int v, bool isDirected = false) {
        adjList[u].push_back(v);
        if (!isDirected) {
            adjList[v].push_back(u);
        }
    }

    void bfs(int start) {
        vector<bool> visited(vertices, false); 
        queue<int> q;                          

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal starting from vertex " << start << ": ";
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    void dfsRecursive(int start) {
        vector<bool> visited(vertices, false);
        cout << "DFS (Recursive) starting from vertex " << start << ": ";
        dfsHelper(start, visited);
        cout << endl;
    }

    void dfsHelper(int vertex, vector<bool> &visited) {
        visited[vertex] = true;
        cout << vertex << " ";

        for (int neighbor : adjList[vertex]) {
            if (!visited[neighbor]) {
                dfsHelper(neighbor, visited);
            }
        }
    }

    void dfsIterative(int start) {
        vector<bool> visited(vertices, false);
        stack<int> s;                          

        s.push(start);
        cout << "DFS (Iterative) starting from vertex " << start << ": ";

        while (!s.empty()) {
            int current = s.top();
            s.pop();

            if (!visited[current]) {
                visited[current] = true;
                cout << current << " ";

                for (auto it = adjList[current].rbegin(); it != adjList[current].rend(); ++it) {
                    if (!visited[*it]) {
                        s.push(*it);
                    }
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int vertices = 6;

    Graph graph(vertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    graph.bfs(0);
    graph.dfsRecursive(0);
    graph.dfsIterative(0);

    return 0;
}