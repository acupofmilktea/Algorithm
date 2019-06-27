//
// Created by az91t on 2019-06-15.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int map[102][102]={0,};
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0};
int chk=2;
vector<pair<int,int>> v;
void dfs(int i, int j){
    if(map[i][j]==0||map[i][j]==chk)
        return;
    map[i][j]=chk;
    for(int m=0; m<4; m++){
        if(map[i+vi[m]][j+vj[m]]==0){
            v.emplace_back(i,j);
            break;
        }
    }
    for(int m=0; m<4; m++){
        dfs(i+vi[m], j+vj[m]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            if(map[i][j]==1){
                dfs(i,j);
                chk++;
            }
        }
    }
    int minD=300;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(map[v[i].first][v[i].second]!=map[v[j].first][v[j].second]){
                int d=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second)-1;
                if(minD>d)
                    minD=d;
            }
        }
    }
    printf("%d", minD);
    return 0;
}