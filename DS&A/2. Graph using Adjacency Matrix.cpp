#include<bits/stdc++.h>
using namespace std;

int **graph(int v){

int **m = new int*[v];

    for(int i=0;i<v;i++){
        m[i]= new int[v];
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            m[i][j]=0;
        }
    }
    return m;
}

void addEdge(int **g, int u,int v){
    g[u][v]=g[v][u]=1;
}

void printGraph(int **m,int v){
     for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

int v;
int edge;

    ifstream in("graph.txt");
    in>>v>>edge;

    int **g = graph(v);
    int u1,v1;

    for(int i=0;i<edge;i++){
        in>>u1>>v1;
        addEdge(g,u1,v1);
    }

    printGraph(g,v);
}
