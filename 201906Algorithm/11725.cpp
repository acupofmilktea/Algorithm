//
// Created by az91t on 2019-06-26.
//

#include <iostream>
#include <queue>
#include <vector>
#define MAX 100001
using namespace std;
vector<int> v[MAX];
bool check[MAX];
int parent[MAX];
void bfs(){
    queue<int> q;
    q.push(1);
    check[1]=true;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(int i=0; i<v[tmp].size(); i++){
            if(!check[v[tmp][i]]){
                parent[v[tmp][i]]=tmp;
                q.push(v[tmp][i]);
                check[v[tmp][i]]=true;
            }
        }
    }
}
int main(){
    cin.tie();
    int N, a, b;
    cin>>N;
    for(int i=0; i<N-1; i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs();
    for(int i=2; i<=N; i++){
        cout<<parent[i]<<"\n";
    }
    return 0;
}
