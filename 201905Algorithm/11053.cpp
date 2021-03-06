//
// Created by az91t on 2019-05-29.
//

#include <iostream>
using namespace std;
int series[1001], dp[1001]={0,};
int main() {
    int N, i, j;
    cin>>N;
    for(i=1; i<=N; i++) {
        cin>>series[i];
        dp[i]=1;
    }
    if(N==1) { puts("1"); return 0; }
    int maxLength=1;
    for(i=1; i<N; i++) {
        for(j=i+1; j<N+1; j++) {
            if(series[j]>series[i]) {
                dp[j]=max(dp[j], dp[i]+1);
            }
        }
    }
    for(i=1; i<N+1; i++) {
        if(dp[i]>maxLength) { maxLength = dp[i]; }
    }
    cout<<maxLength<<endl;
    return 0;
}