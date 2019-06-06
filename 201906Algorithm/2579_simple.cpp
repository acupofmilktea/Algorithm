//
// Created by az91t on 2019-06-06.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cost[302]={0,}, dp[302]={0,};
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
    dp[1]=cost[1];
    dp[2]=dp[1]+cost[2];
    dp[3]=max(cost[1]+cost[3], cost[2]+cost[3]);
    //1011, 0101만 고려해 주면 된다
    for(int i=4; i<=n; i++) {
        dp[i]=max(dp[i-3]+cost[i-1]+cost[i], dp[i-2]+cost[i]);
    }
    cout<<dp[n];
    return 0;
}