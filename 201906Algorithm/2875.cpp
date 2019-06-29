//
// Created by az91t on 2019-06-29.
//

#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int N, M, K;
    //N: 여 M: 남 K: 인턴쉽 참가수
    cin>>N>>M>>K;
    //최대 팀 수 구하기
    int cnt=0;
    while(N>=2&&M>=1){
        N-=2;
        M--;
        cnt++;
    }
    K=K-M-N;
    if(K<=0){
        cout<<cnt;
        return 0;
    }
    while(K!=0){
        if(K>=3){
            K-=3;
        }else if(K==2){
            K-=2;
        }else{
            K--;
        }
        cnt--;
    }
    cout<<cnt;
    return 0;
}