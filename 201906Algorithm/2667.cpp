//
// Created by az91t on 2019-06-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0}, cnt;
void dfs(int graph[27][27], int i, int j){
    if(graph[i][j]==0)
        return;
    cnt++;
    graph[i][j]=0;
    for(int m=0; m<4; m++){
        dfs(graph, i+vi[m], j+vj[m]);
    }
}
int main(){
    int n;
    cin>>n;
    int graph[27][27]={0,};
    string aprt;
    for(int i=1; i<=n; i++){
        cin>>aprt;
        for(int j=0; j<n; j++){
            if(aprt[j]=='1')
                graph[i][j+1]=1;
        }
    }
    int total=0;
    vector<int> v;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cnt=0;
            if(graph[i][j]==1){
                dfs(graph, i, j);
                if(cnt>0){
                    total++;
                    v.push_back(cnt);
                }
            }
        }
    }
    cout<<total<<"\n";
    if(v.empty())
        return 0;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<"\n";
    return 0;
}
