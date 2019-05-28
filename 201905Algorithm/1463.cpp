#include <iostream>
using namespace std;
int dp[1000001];

int main() {
    int n;
    cin>>n;

    dp[0]=dp[1]=0;
    for(int i=2; i<=n; i++) {
        dp[i]=dp[i-1]+1; //1더하고 시작해서
        if(i%3==0) { dp[i]=min(dp[i], dp[i/3]+1); }
        if(i%2==0) { dp[i]=min(dp[i], dp[i/2]+1); }
        //더 작은 것을 고름
    }
    printf("%d", dp[n]);
    return 0;
}