//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
using namespace std;
int num[5000001];
int main() {
    cin.tie();
    int N, K;
    cin>>N>>K;
    int minIdx=0;
    for(int i=0; i<N; i++) {
        cin>>num[i];
        if(num[i]<num[minIdx]) {
            minIdx=i;
        }
    }
    if(minIdx!=0) {
        int temp=num[0];
        num[0]=num[minIdx];
        num[minIdx]=temp;
    }
    int count=0;
    for(int i=0; i<N; i++) {
        if(num[i])
    }
    cout<<num[K-1];
    return 0;
}