//
// Created by az91t on 2019-05-23.
//
//나중에 다시 풀어보기

#include <iostream>
using namespace std;
int count[1000001];

int main() {
    int N;
    cin>>N;

    count[0]=count[1]=0;
    for(int i=2; i<=N; i++) {
        count[i]=count[i-1]+1;
        if(i%2==0) {
            count[i]=min(count[i], count[i/2]+1);
            //i/2일 때에서 +1
        }
        if(i%3==0) {
            count[i]=min(count[i], count[i/3]+1);
            //i/3일 때에서 +1
        }
    }
    cout<<count[N];
    return 0;
}