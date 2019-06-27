//
// Created by az91t on 2019-06-27.
//
//가장 긴 지름 찾고 거기에서부터 긴 지름 찾으면 된다
#include <iostream>
#include <vector>
#define MAX 10001
using namespace std;
vector<pair<int,int>> v[MAX];
int maxDist=0, p=0;
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
    int N;
    scanf("%d", &N );
    int idx, n, d;
    for(int i=1; i<N; i++){
        scanf("%d %d %d", &idx, &n, &d);
        v[idx].emplace_back(n, d);
        v[n].emplace_back(idx, d);
    }
    dfs(1, 0);
    fill(check, check+MAX, false);
    dfs(p, 0);
    cout<<maxDist;
    return 0;
}