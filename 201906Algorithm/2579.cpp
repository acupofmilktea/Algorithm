//
// Created by az91t on 2019-06-06.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cost[302]={0,}, dp[3][302]={0,};
    //dp[0]:1011
    //dp[1]:0110
    //dp[2]:1101
    for(int i=1; i<=n; i++) {
        cin>>cost[i];
    }
    if(n==1) {
        cout<<cost[1];
        return 0;
    }
    if(n==2) {
        cout<<cost[1]+cost[2];
        return 0;
    }
    dp[0][1]=dp[2][1]=cost[1]; dp[0][3]=dp[0][1]+cost[3];
    dp[1][2]=cost[2]; dp[1][3]=dp[1][2]+cost[3];
    dp[2][2]=dp[2][1]+cost[2];
    for(int i=4; i<=n; i++) {
        dp[0][i]=max(dp[0][i-3]+cost[i-1]+cost[i], dp[0][i-2]+cost[i]);
        dp[1][i]=max(dp[1][i-3]+cost[i-1]+cost[i], dp[1][i-2]+cost[i]);
        dp[2][i]=max(dp[2][i-3]+cost[i-1]+cost[i], dp[2][i-2]+cost[i]);
    }
    cout<<max(dp[0][n], max(dp[1][n], dp[2][n]));
    return 0;
}