//
// Created by az91t on 2019-06-08.
//
//0!=1이다
#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(N==0) {
        cout<<1;
        return 0;
    }
    for(int i=N-1; i>=1; i--)
        N*=i;
    cout<<N;
    return 0;
}