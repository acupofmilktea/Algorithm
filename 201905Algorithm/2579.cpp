#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    int stair[302]={0,}, dp[2][302]={0,};
    for(i=1; i<=n; i++) {
        cin>>stair[i];
        dp[0][i]=dp[1][i]=stair[i];
    }
    if(n==1) {
        cout<<stair[1];
        return 0;
    }
    if(n==2) {
        cout<<stair[1]+stair[2];
        return 0;
    }
    if(n==3) {
        cout<<max(stair[1]+stair[3], stair[0]+max(stair[1], stair[3]));
        return 0;
    }
    //dp[0]: 첫번째 계단부터 밟는 경우
    //dp[1]: 두번째 계단부터 밟는 경우
    for(i=2; i<n; i++) {
        dp[0][i]=max(dp[0][i-2]+stair[i], dp[0][i-2]+stair[i-1]);
        for(int j=1; j<=n; j++) {
            cout<<dp[0][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=4; i<n; i++) {
        dp[1][i]=max(dp[1][i-2]+stair[i], dp[1][i-2]+stair[i-1]);
    }
    dp[0][n]=max(dp[0][n-2]+stair[n], dp[0][n-1]+stair[n]);
    dp[1][n]=max(dp[1][n-2]+stair[n], dp[1][n-1]+stair[n]);
    for(int j=1; j<=n; j++) {
        cout<<dp[0][j]<<" ";
    }
    cout<<"\n";
    for(int j=1; j<=n; j++) {
        cout<<dp[1][j]<<" ";
    }
    cout<<"\n";
    cout<<max(dp[0][n], dp[1][n])<<endl;
    return 0;
}