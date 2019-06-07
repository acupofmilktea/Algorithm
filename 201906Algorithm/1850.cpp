//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b) {
    while(b!=0) {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() {
    cin.tie();
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long n=min(a,b), m=max(a,b);
    if(n==1) {
        printf("1");
        return 0;
    }
    long long digit=1;
    if(m%n==0) {
        digit=n;
    } else {
        digit=gcd(n, m);
    }
    for(int i=0; i<digit; i++) {
        printf("1");
    }
    return 0;
}