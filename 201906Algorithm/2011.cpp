//
// Created by az91t on 2019-06-06.
//

#include <iostream>
#define MOD 1000000
using namespace std;
//뒤에서부터 시작해보자
int main() {
    while(true) {
        string pw;
        cin>>pw;
        int dp[2][5001]={0,};
        //dp[0]: 한자리
        //dp[1]: 두자리
        if(pw[0]>='1'&&pw[0]<='9') {
            dp[0][1]++;
        }
        if(pw.size()==1) {
            cout<<dp[0][1];
            return 0;
        }
        if((pw[0]=='1'&&pw[1]>='0'&&pw[1]<='9')||
           (pw[0]=='2'&&pw[1]>='0'&&pw[1]<='6')) {
            dp[1][1]++;
        }
        for(int i=2; i<=pw.size(); i++) {
            if(pw[i-1]>='1'&&pw[i-1]<='9') {
                if(pw[i]=='0'&&i<pw.size()) { continue; }
                dp[0][i]=dp[0][i-1]+dp[1][i-2];
            }
            if((pw[i-1]=='1'&&pw[i]>='0'&&pw[i]<='9')||
               (pw[i-1]=='2'&&pw[i]>='0'&&pw[i]<='6')) {
                dp[1][i]=dp[0][i-1]+dp[1][i-2];
            }
            dp[0][i]%=MOD;
            dp[1][i]%=MOD;
        }

        for(int i=0; i<=pw.size(); i++) {
            cout<<dp[0][i]<<" ";
        }
        cout<<"\n";
        for(int i=0; i<=pw.size(); i++) {
            cout<<dp[1][i]<<" ";
        }
        cout<<"\n";
        cout<<(dp[0][pw.size()]+dp[1][pw.size()])%MOD;
    }

    return 0;
}