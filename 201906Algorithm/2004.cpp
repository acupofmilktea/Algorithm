//
// Created by az91t on 2019-06-09.
//

#include <iostream>
#include <algorithm>
using namespace std;
long long cntFunc(long long n, long long d) {
    long long cnt=0;
    while(n!=0) {
        cnt+=n/d;
        n/=d;
    }
    return cnt;
}
int main() {
    long long n, m;
    cin>>n>>m;
    cout<<min(cntFunc(n,2)-cntFunc(m, 2)-cntFunc(n-m, 2), cntFunc(n,5)-cntFunc(m, 5)-cntFunc(n-m, 5));
    return 0;
}