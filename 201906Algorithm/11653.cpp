//
// Created by az91t on 2019-06-08.
//
//소수 검사를 안 해줘도 되는 건 에라토스테네스의 체 생각하면 됨
#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(N==1) {
        return 0;
    }
    int n=2;
    while(N!=1) {
        while(N%n==0) {
            cout<<n<<"\n";
            N/=n;
        }
        n++;
    }
    return 0;
}