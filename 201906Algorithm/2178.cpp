//
// Created by az91t on 2019-06-12.
//

#include <iostream>
using namespace std;
int maze[102][102]={0,};
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0};
int N, M;
void dfs(int i, int j){
    if(i==N&&j==M)
        return;
    for(int m=0; m<4; m++){
        if(maze[i+vi[m]][j+vj[m]]!=0){
            maze[i+vi[m]][j+vj[m]]=maze[i][j]+1;
            dfs(i+vi[m], j+vj[m]);
        }
    }
}
int main(){
    cin>>N>>M;
    for(int i=0; i<N; i++){
        string str;
        cin>>str;
        for(int j=0; j<M; j++){
            if(str[j]=='0'){
                maze[i+1][j+1]=0;
            }
            if(str[j]=='1'){
                maze[i+1][j+1]=1;
            }
        }
    }
    for(int i=0; i<=N+1; i++){
        for(int j=0; j<=M+1; j++){
            cout<<maze[i][j]<<" ";
        }
        cout<<"\n";
    }
    dfs(1, 1);
    cout<<maze[N][M];
    return 0;
}
