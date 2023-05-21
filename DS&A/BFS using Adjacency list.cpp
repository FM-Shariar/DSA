#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *G, int n, int s){

    queue<int> q;
     int *visited = new int[n];
     int *distance = new int[n];

     for(int i=0;i<n;i++){
        visited[i]=distance[i]=0;
     }
     q.push(s);
     visited[s]=1;
     distance[s]=0;

     while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int i=0;i<G[p].size();i++){
                int nxtadj = G[p][i];
                if(visited[nxtadj]==0){
                    visited[nxtadj]=1;
                    q.push(nxtadj);
                    distance[nxtadj] = distance[p]+1;
                }
            }
     }

     cout<<"Distance from: "<<s<<endl;
     for(int i=0;i<n;i++){
        cout<<s<<" to "<<i<<" distance: "<<distance[i]<<endl;
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
cout<<"From where want to start BFS:";
cin>>source;

bfs(g,nodes,source);



return 0;
}

