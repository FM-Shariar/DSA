#include<bits/stdc++.h>
using namespace std;

vector<int> degreeOfVertices(vector<int>* g, int v)
{
    vector<int> degrees(v);
    for (int i = 0; i < v; i++)
    {
        degrees[i] = g[i].size();
    }
    return degrees;
}

vector<int>* graph(int v) {
    return new vector<int>[v];
}

void addEdge(vector<int>* g, int u, int v) {
    g[u].push_back(v);
    g[v].push_back(u);
}

void printGraph(vector<int>* g, int v) {
    for (int i = 0; i < v; i++) {
        cout << i << "->";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int vertex;
    int edge;
    ifstream in("graph.txt");
    in >> vertex >> edge;
    vector<int>* g = graph(vertex);
    int u1, v1;
    for (int i = 0; i < edge; i++)
    {
        in >> u1 >> v1;
        addEdge(g, u1, v1);
    }
    vector<int> arr = degreeOfVertices(g, vertex);
    for (int i = 0; i < vertex; i++)
    {
        cout << "Degree of vertex " << i << " is " << arr[i] << endl;
    }
    printGraph(g, vertex);
}
