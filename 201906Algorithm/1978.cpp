//
// Created by az91t on 2019-06-08.
//

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if(n==1)
        return false;
    for(int i=n/2; i>1; i--) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int N, cnt=0;
    cin>>N;
    for(int i=0; i<N; i++) {
        int n;
        cin>>n;
        if(isPrime(n))
            cnt++;
    }
    cout<<cnt;
    return 0;
}