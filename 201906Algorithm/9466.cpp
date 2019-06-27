//
// Created by az91t on 2019-06-15.
//

#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;
int graph[MAX], n;
int check[MAX]={0,};
vector<int> v;
void dfs(int start){
    v.push_back(start);
    int next=graph[start];
    if(check[next]!=0){
        if(v.front()!=next)
            graph[v.front()]=-1;
        int len=check[next];
        while(v.size()>=len){
            check[v.back()]=0;
            graph[v.back()]=0;//이미 사이클 포함
            v.pop_back();
        }
        while(!v.empty()){
            check[v.back()]=0;
            v.pop_back();
        }
        return;
    }
    if(graph[next]==0||graph[next]==-1){//이미 사이클이 형성된 곳이나 불가능한 곳
        graph[v.front()]=-1;
        while(!v.empty()){
            check[v.back()]=0;
            v.pop_back();
        }
        return;
    }
    check[next]=check[start]+1;
    dfs(next);
}
int main() {
    int T;
    scanf("%d", &T);
    while(T>0){
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            scanf("%d", &graph[i]);
        }
        for(int i=1; i<=n; i++){
            if(graph[i]==0)
                continue;
            check[i]=1;
            dfs(i);
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(graph[i]==-1)
                cnt++;
        }
        printf("%d\n", cnt);
        T--;
    }
    return 0;
}