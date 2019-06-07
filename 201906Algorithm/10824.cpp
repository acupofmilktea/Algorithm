//
// Created by az91t on 2019-06-07.
//
//stoi로 풀면 런타임에러난다
//안전하게 unsigned long long으로 가자
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    string arr[4];
    for(int i=0; i<4; i++) {
        cin>>arr[i];
    }
    unsigned long long a, b;
    a=stoi(arr[0])*pow(10, arr[1].size())+stoi(arr[1]);
    b=stoi(arr[2])*pow(10, arr[3].size())+stoi(arr[3]);
    cout<<a+b;
    return 0;
}