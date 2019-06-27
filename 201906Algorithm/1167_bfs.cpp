//
// Created by az91t on 2019-06-27.
//

#include <iostream>
#include <vector>
#include <queue>
#define MAX 100001
using namespace std;
int V, maxd=0, td[MAX];
vector<pair<int,int>> v[MAX];
void bfs(int start){
    int frt;
    queue<int> q;
    q.push(start);
    bool check[MAX]={false};
    check[start]=true;
    fill(td, td+MAX, 0);
    while(!q.empty()){
        frt=q.front();
        q.pop();
        for(int i=0; i<v[frt].size(); i++){
            int tmp=v[frt][i].first;
            if(!check[tmp]){
                q.push(tmp);
                check[tmp]=true;
                td[tmp]=max(td[tmp], td[frt]+v[frt][i].second);
                if(td[tmp]>maxd){
                    maxd=td[tmp];
                }
            }
        }
    }
}
int main(){
    cin.tie();
    cin>>V;
    int cnt=0, idx, n, d;
    do{
        cnt++;
        cin>>idx;
        while(cin>>n){
            if(n==-1)
                break;
            cin>>d;
            v[idx].emplace_back(n,d);
        }
    } while(cnt!=V);
    int start=1;
    bfs(start);
    for(int i=2; i<=V; i++){
        if(td[start]<td[i])
            start=i;
    }
    bfs(start);
    cout<<maxd;
    return 0;
}