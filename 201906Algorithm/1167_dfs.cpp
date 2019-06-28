//
// Created by az91t on 2019-06-27.
//

#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;
int V, maxDist=0, p=0;
vector<pair<int,int>> v[MAX];
bool check[MAX];
void dfs(int start, int dist){
    if(check[start])
        return;
    check[start]=true;
    if(maxDist<dist){
        maxDist=dist;
        p=start;
    }
    for(int i=0; i<v[start].size(); i++){
        pair<int,int> next=v[start][i];
        dfs(next.first, dist+next.second);
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
    dfs(start, 0);
    fill(check, check+MAX, false);
    dfs(p, 0);
    cout<<maxDist;
    return 0;
}