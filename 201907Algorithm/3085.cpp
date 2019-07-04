//
// Created by az91t on 2019-07-04.
//
//뭔짓을 한 거지
//걍 세로가로 합만 구하면 돼
#include <iostream>
using namespace std;
int N;
int maxFun(int candy[52][52]){
    int sum[4]={0,}, max=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(candy[i][j]==1){
                sum[0]++;
            }else if(candy[i][j]==2){
                sum[1]++;
            }else if(candy[i][j]==3){
                sum[2]++;
            }else{
                sum[3]++;
            }
        }
    }
    for(int i=0; i<4; i++){
        if(sum[i]>max)
            max=sum[i];
    }
    return max;
}
int main(){
    cin.tie();
    int i, j;
    cin>>N;
    int candy[52][52]={0,};
    string str;
    for(i=0; i<N; i++){
        cin>>str;
        for(j=0; j<N; j++){
            if(str[j]==67){//C
                candy[i+1][j+1]=1;
            }else if(str[j]==80){//P
                candy[i+1][j+1]=2;
            }else if(str[j]==89){//Y
                candy[i+1][j+1]=3;
            }else if(str[j]==90){//Z
                candy[i+1][j+1]=4;
            }
        }
    }
    int sum, max;
    for(i=1; i<=N; i++){
        sum=0;
        for(j=1; j<=N; j++){
            if()
        }
    }
    return 0;
}