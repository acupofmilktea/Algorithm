//
// Created by az91t on 2019-05-29.
//

#include <iostream>
#define MAX 10001
using namespace std;
int main() {
    int n, wine[MAX], dp[MAX]={0,};
    cin>>n;
    for(int i=0; i<n; i++) { cin>>wine[i]; dp[i]=wine[i]; }
    if(n==1) { cout<<wine[0]<<endl; return 0; }
    if(n==2) { cout<<wine[0]+wine[1]<<endl; return 0; }

    for(int i=3; i<n; i++) {
        dp[i]=max(dp[i-2]+wine[i],max(dp[i-2]+wine[i-1], dp[i-3]+wine[i-1]));
        cout<<"dp["<<i<<"]: "<<dp[i]<<" ";
        for(int j=0; j<n; j++) {cout<<dp[j]<<" ";}
        cout<<"\n";
    }
    cout<<dp[n-1]<<endl;
    return 0;
}