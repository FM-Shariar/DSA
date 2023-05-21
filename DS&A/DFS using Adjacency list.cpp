#include<bits/stdc++.h>
using namespace std;

void dfs( vector<int> *g, int n, int source){
    stack<int> s;
    bool * visited = new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    s.push(source);
    visited[source]=true;
    cout<<"Visit sequence: ";
    while(!s.empty()){
        int v = s.top();
        s.pop();
        cout<<v<<" ";
        for(int i=0;i<g[v].size();i++){
            int next = g[v][i];
            if(!visited[next]){
                s.push(next);
                visited[next]=true;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Node "<<i<<" "<<((visited[i]==1)?"visited":"Not visited")<<endl;
    }

}

vector<int> * graph(int v){

    return new vector<int>[v];

}

void addEdge(vector<int> *g, int u,int v ){

    g[u].push_back(v);
    g[v].push_back(u);
}

void printGraph(vector<int>*g,int v){

 for(int i=0;i<v;i++){
            cout<<i<<"->";
        for(int j=0;j<g[i].size();j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }


}



int main(){

    vector<int> *g;

    int nodes;
    int edges;
    ifstream in("graph.txt");
    in>>nodes>>edges;

    g = graph(nodes);

    int u,v;

    for(int i=0;i<edges;i++){
        in>>u>>v;
        addEdge(g,u,v);
    }

    printGraph(g,nodes);

    int source;
    cout<<"Enter the source from where start DFS:";
    cin>>source;

   dfs(g,nodes,source);

return 0;
}
