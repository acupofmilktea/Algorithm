//
// Created by az91t on 2019-06-12.
//

#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;
int graph[MAX];
bool check[MAX];
void dfs(queue<int> q, int start){
    q.push(start);
    if(check[start]){
        while(!q.empty()){
            q.pop();
        }
        return;
    }
    int next=graph[start];
    if(next==q.front()){
        while(!q.empty()){
            check[q.front()]=true;
            q.pop();
        }
        return;
    }
    dfs(q, next);
}
int main() {
    int T;
    cin>>T;
    while(T>0){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>graph[i];
        }
        fill(check, check+(n+1), false);
        for(int i=1; i<=n; i++){
            queue<int> q;
            dfs(q,i);
            for(int j=1; j<=n; j++){
                cout<<check[i]<<" ";
            }
            cout<<"\n";
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(!check[i])
                cnt++;
        }
        cout<<cnt<<"\n";
        T--;
    }
    return 0;
}