//
// Created by az91t on 2019-06-12.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> graph[1001];
bool check[1001];
void dfs(int start) {
    check[start]=true;
    for(int i=0; i<graph[start].size(); i++) {
        int next=graph[start][i];
        if(!check[next])
            dfs(next);
    }
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    int cnt=0;
    for(int i=1; i<=N; i++) {
        if(!check[i]) {
            dfs(i);
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}