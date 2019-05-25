//
// Created by az91t on 2019-05-23.
//

#include <iostream>
using namespace std;

int main() {
    int N, i=1, j;
    cin>>N;

    int n=2*N-1;
    while(n>0) {
        for(j=N-i; j>=1; j--) {
            cout<<" ";
        }
        for(j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<"\n";
        if(n>N) {
            i+=1;
        } else {
            i=n-1;
        }
        n--;
    }
    return 0;
}