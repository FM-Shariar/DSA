#include<bits/stdc++.h>
using namespace std;


void dfs( int **g, int n, int s){
    stack<int> S;
    bool * visited = new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    S.push(s);
    visited[s]=true;
    cout<<endl;
    while(!S.empty()){
        int v = S.top();
        S.pop();
        cout<<v<<" ";
        for(int i=0;i<n;i++){
                if(g[v][i]==1){
                    int next = i;
                    if(visited[next]==false){
                        S.push(next);
                        visited[next]=true;
                    }
                }

        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<" "<<visited[i]<<endl;
    }
}

void printGraph(int **g, int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }




}

int main(){

    int nodes, edges;

    cin>>nodes>>edges;

    int **g = new int*[nodes];
    for(int i=0;i<nodes;i++){
        g[i] = new int[nodes];
    }


    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
           g[i][j]=0;
        }
    }


    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }

    printGraph(g,nodes);

    int source;
    cin>>source;
    dfs(g,nodes,source);




return 0;
}
