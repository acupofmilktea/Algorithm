//
// Created by az91t on 2019-05-24.
//
//1씩 더하는 거니까 중복된 케이스 제거하면 그냥 1...씩... 증가...

#include <iostream>
int main() {
    int T, n;
    scanf("%d", &T);

    for(int i=0 ;i<T; i++) {
        scanf("%d", &n);
        int count[11]={0,};
        count[1]=1, count[2]=2, count[3]=4;
        if(n>=4) {
            for(int j=4; j<=n; j++) {
                count[j]+=count[j-3]+count[j-2]+count[j-1];
            }
        }
        printf("%d\n", count[n]);
    }

    return 0;
}