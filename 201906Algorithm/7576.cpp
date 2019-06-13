//
// Created by az91t on 2019-06-12.
//

#include <iostream>
#include <stack>
using namespace std;
int box[1002][1002];
int cntZero=0, cnt=0;
void print(int M, int N){
    for(int i=0; i<=N+1; i++){
        for(int j=0; j<=M+1; j++){
            printf("%d ", box[i][j]);
        }
        printf("\n");
    }
    printf("------------------\n");
}
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0};
void dfs(int i, int j){
    if(box[i][j]!=1)
        return;
    if(box[i][j-1]==0||box[i][j+1]==0||box[i-1][j]==0||box[i+1][j]==0){
        cnt++;
    }
    for(int m=0; m<4; m++){
        if(box[i+vi[m]][j+vj[m]]==0){
            cntZero--;
            box[i+vi[m]][j+vj[m]]=1;
            dfs(i+vi[m], j+vj[m]);
        }
    }
    print(6,4);
}
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    for(int i=0; i<=N+1; i++){
        for(int j=0; j<=M+1; j++)
            box[i][j]=-1;
    }
    stack<int> si, sj;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%d", &box[i][j]);
            if(box[i][j]==0)
                cntZero++;
            if(box[i][j]==1){
                si.push(i);
                sj.push(j);
            }
        }
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            dfs(i, j);
            if(cntZero==0){
                printf("%d", cnt);
                return 0;
            }
        }
    }
    if(cntZero!=0)
        printf("-1");
    return 0;
}