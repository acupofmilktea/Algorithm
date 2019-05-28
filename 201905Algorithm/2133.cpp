//
// Created by az91t on 2019-05-28.
//

#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(N%2==1) { puts("0"); return 0; }
    int dp[16]={0,};
    dp[1]=3, dp[2]=11;
    for(int i=3; i<=N/2; i++) {
        dp[i]=3*dp[i-1]+2;//2는 위아래 뒤집힌 것
        for(int j=i-2; j>0; j--) {
            dp[i]+=2*dp[j];
        }
    }
    cout<<dp[N/2]<<endl;
    return 0;
}