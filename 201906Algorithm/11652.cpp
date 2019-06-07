//
// Created by az91t on 2019-06-07.
//
//맵을 이용하면 효율적

#include <iostream>
#include <algorithm>
#define MAX 1000001
long long num[MAX];
int cnt[MAX]={0,};
int main() {
    int N;
    std::cin>>N;
    for(int i=0; i<N; i++) {
        std::cin>>num[i];
        cnt[i]=1;
    }
    std::sort(num, num+N);
    int maxIdx=0;
    for(int i=1; i<N; i++) {
        if(num[i-1]==num[i]) {
            cnt[i]=cnt[i-1]+1;
        }
        if(cnt[i]>cnt[maxIdx]) {
            maxIdx=i;
        }
        if(cnt[i]==cnt[maxIdx]&&num[i]<num[maxIdx]) {
            maxIdx=i;
        }
    }
    std::cout<<num[maxIdx];
    return 0;
}