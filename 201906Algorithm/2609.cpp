//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie();
    int a, b;
    cin>>a>>b;
    if(a==1||b==1) {
        cout<<1<<" "<<a*b;
        return 0;
    }
    for(int i=min(a,b); i>=1; i--) {
        if(a%i==0&&b%i==0) {
            cout<<i<<" ";
            break;
        }
    }
    int n=min(a,b), m=max(a,b), rst=n;
    while(rst%m!=0) {
        rst+=n;
    }
    cout<<rst;
    return 0;
}