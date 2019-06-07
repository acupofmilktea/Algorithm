//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    string N;
    int B, rst=0;
    cin>>N>>B;
    int size=N.size();
    for(int i=0; i<size; i++) {
        int temp;
        if(N[i]>='A'&&N[i]<='Z') {
            temp=N[i]-55;
        }
        if(N[i]>='0'&&N[i]<='9') {
            temp=N[i]-'0';
        }
        rst+=temp*pow(B, size-i-1);
    }
    cout<<rst;
    return 0;
}