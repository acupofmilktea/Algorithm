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
    if(n==2) {
        cout<<cost[1]+cost[2];
        return 0;
    }
    for(int i=4; i<=n+1; i++) {
        dp[i]=max(dp[i-3]+max(cost[i-1], cost[i-2]+cost[i]), dp[i-2]+cost[i-1]);
        cout<<dp[i]<<"\n";
    }
    cout<<dp[n+1];
    return 0;
}