//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while(b!=0) {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() {
    cin.tie();
    int T;
    cin>>T;
    for(int i=0; i<T; i++) {
        int n, num[101];
        long long sum=0;
        cin>>n; cin>>num[0];
        for(int j=1; j<n; j++) {
            cin>>num[j];
            for(int k=j-1; k>=0; k--) {
                sum+=gcd(num[j], num[k]);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}