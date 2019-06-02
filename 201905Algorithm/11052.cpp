//
// Created by az91t on 2019-05-30.
//

#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int card[1001]={0,}, dp[1001]={0,};
    for(int i=1; i<=N; i++) {
        cin>>card[i];
        dp[i]=card[i];
    }
    for(int i=2; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            dp[i]=max(dp[i], dp[j]+card[i-j]);
        }
    }
    cout<<dp[N]<<endl;
    return 0;
}