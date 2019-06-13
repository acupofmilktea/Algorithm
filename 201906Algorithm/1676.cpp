//
// Created by az91t on 2019-06-08.
//

#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(N==0) {
        cout<<0;
        return 0;
    }
    int cnt[3]={0,};
    while(N>1) {
        int n=N;
        while(n%10==0) {
            cnt[2]++;
            n/=10;
        }
        while(n%5==0) {
            cnt[1]++;
            n/=5;
        }
        while(n%2==0) {
            cnt[0]++;
            n/=2;
        }
        N--;
    }
    cout<<cnt[2]+min(cnt[0], cnt[1]);
    return 0;
}