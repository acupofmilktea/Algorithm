//
// Created by az91t on 2019-06-10.
//
//10000이하의 숫자만 주어진다는 것이 포인트
//메모리초과에 유의해서 풀어야함
#include <iostream>
int main() {
    int N, temp, cnt[10001]={0,};
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &temp);
        cnt[temp]++;
    }
    int i, j;
    for(i=1; i<10001; i++) {
        if(cnt[i]!=0) {
            for(j=0; j<cnt[i]; j++)
                printf("%d\n", i);
        }
    }
    return 0;
}