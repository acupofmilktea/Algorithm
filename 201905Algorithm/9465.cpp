//
// Created by az91t on 2019-05-26.
//
//케이스를 나눠 풀기
//혼자서 풀 수 있을까

#include <iostream>
#define MAX 100001
using namespace std;

int main() {
    int T, n, i, j;
    cin>>T;

    while(T>0) {
        cin>>n;
        int stk[2][MAX], dp[3][MAX]={0,};
        for(i=0; i<2; i++) {
            for(j=0; j<n; j++) {
                cin>>stk[i][j];
            }
        }

        for(i=0; i<n; i++) {
            dp[0][i+1]=max(dp[0][i+1], max(dp[0][i], max(dp[1][i], dp[2][i])));
            //안떼는 것과 위아래 떼는 것중 최대
            dp[1][i+1]=max(dp[1][i+1], max(dp[0][i], dp[2][i])+stk[0][i]);
            dp[2][i+1]=max(dp[2][i+1], max(dp[0][i], dp[1][i])+stk[1][i]);
            //안 떼는 것과 위/아래 떼는 것 중 최대
        }

        cout<<max(dp[0][n], max(dp[1][n], dp[2][n]))<<"\n";
        T--;
    }
    return 0;
}