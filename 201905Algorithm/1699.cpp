//
// Created by az91t on 2019-05-28.
//

#include <iostream>
#define MAX 100001
using namespace std;
int dp[MAX]={0};
int main() {
    int N;
    cin>>N;
    for(int i=0; i<=N; i++) {
        dp[i]=i;
    }
    for(int i=4; i<=N; i++) {
        for(int j=2; j<=i; j++) {
            int jj=j*j;
            if(jj>i) break;
            if(jj==N) { puts("1"); return 0; }
            dp[i]=min(dp[i], dp[i-jj]+1);
        }
    }
    cout<<dp[N];
    return 0;
}