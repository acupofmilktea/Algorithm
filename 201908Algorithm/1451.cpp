//
// Created by az91t on 2019-08-12.
//
//언젠가 다시 풀라
#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int N, M;
    cin>>N>>M;
    string str;
    int sq[102][102]={0,}, sum=0;
    for(int i=0; i<N; i++){
        cin>>str;
        for(int j=0; j<M; j++){
            sq[i+1][j+1]=str[j]-'0';
            sum+=sq[i+1][j+1];
        }
    }
    int maxSum=0;
    for(int i=0; i<N; i++){
        sq[i+1][1]+=sq[i][1];
        for(int j=0; j<M; j++){
            sq[i+1][j+1]+=sq[i+1][j];
            int tmpSum=sq[i+1][j+1];
            for(int k=i+1; k<=N; k++){
                for(int m=j+2; )
            }
            if(tmpSum>maxSum)
                maxSum=tmpSum;
        }
    }
    return 0;
}