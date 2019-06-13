//
// Created by az91t on 2019-06-12.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define red 1
#define blue 2
using namespace std;
string answer;
void dfs(vector<int> graph[], int check[], int start) {
    for(int i=0; i<graph[start].size(); i++) {
        int next=graph[start][i];
        if(check[start]!=0&&check[next]!=0&&check[start]==check[next]) {
            answer="NO";
            break;
        }
        if(check[next]==0) {
            check[next]=red;
            if(check[start]==red){
                check[next]=blue;
            }
            dfs(graph, check, next);
        }
    }
}
int main() {
    int K;
    scanf("%d", &K);
    while(K>0) {
        int V, E;
        scanf("%d %d", &V, &E);
        vector<int> graph[20001];
        int check[20001]={0,};
        for(int i=0; i<E; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        answer="YES";
        for(int i=1; i<=V; i++) {
            if(check[i]==0) {
                check[i]=red;
                dfs(graph, check, i);
            }
        }
        cout<<answer<<"\n";
        K--;
    }
    return 0;
}