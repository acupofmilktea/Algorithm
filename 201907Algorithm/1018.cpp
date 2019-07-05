//
// Created by az91t on 2019-07-05.
//
//비교할 체스판을 만들어놓고 개수세서 리턴
#include <iostream>
using namespace std;
int white[8][8]={0,}, black[8][8]={0,}, chess[51][51];
pair<int,int> countFun(int m, int n){
    pair<int,int> cnt={0,0};
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(chess[m+i][n+j]!=white[i][j])
                cnt.first++;
            if(chess[m+i][n+j]!=black[i][j])
                cnt.second++;
        }
    }
    return cnt;
}
int main(){
    cin.tie();
    int N, M;
    cin>>N>>M;
    int i, j;
    for(i=0; i<N; i++){
        string str;
        cin>>str;
        for(j=0; j<M; j++){
            if(str[j]==66){
                chess[i][j]=1;//검
            }else{
                chess[i][j]=0;//흰
            }
        }
    }
    //흰, 검으로 시작하는 것
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if(i%2==0) {
                if (j % 2 == 0)
                    black[i][j] = 1;
                else
                    white[i][j]=1;
            }else{
                if(j%2==0)
                    white[i][j]=1;
                else
                    black[i][j]=1;
            }
        }
    }
    int minCnt=1000001;
    for(i=0; i<=N-8; i++){
        for(j=0; j<=M-8; j++){
            pair<int,int> cnt=countFun(i,j);
            minCnt=min(minCnt,min(cnt.first,cnt.second));
        }
    }
    cout<<minCnt<<endl;
    return 0;
}