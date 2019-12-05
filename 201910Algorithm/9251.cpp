//
// Created by az91t on 2019-11-05.
//

#include <iostream>
using namespace std;
int dp[1001][1001]={0,};

// 결국 2차원으로 품 ㅠ 1차원 시도 실패
int main() {
    string str1, str2;
    cin >> str1 >> str2;
    for(int i=0; i<str1.length(); i++){
        for(int j=0; j<str2.length(); j++){
            if(str1[i]==str2[j]) // 맨 앞글자와의 LCS
                dp[i+1][j+1]=dp[i][j]+1;
            else // 바로 앞 글자의 LCS
                dp[i+1][j+1]=max(dp[i][j+1], dp[i+1][j]);
        }
    }

    cout << dp[str1.length()][str2.length()] << endl;

    return 0;
}