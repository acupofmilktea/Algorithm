//
// Created by az91t on 2019-06-05.
//

#include <iostream>
#define MAX 10002
using namespace std;
int main() {
    int n;
    cin>>n;
    int cost[MAX]={0,}, dp[MAX]={0,};
    for(int i=1; i<=n; i++) {
        cin>>cost[i];
        dp[i]=cost[i];
    }
    if(n==1) {
        cout<<cost[1];
        return 0;
    }
    dp[2]=dp[1]+cost[2];
    //1011, 0101, 0010만 고려해주면 된다(안 밟는 경우)
    for(int i=3; i<=n; i++) {
        dp[i]=max(dp[i-3]+cost[i-1]+cost[i], max(dp[i-1], dp[i-2]+cost[i]));
    }
    cout<<dp[n];
    return 0;
}