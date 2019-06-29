//
// Created by az91t on 2019-06-29.
//

#include <iostream>
using namespace std;
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int cost[N];
    for(int i=0; i<N; i++)
        scanf("%d", &cost[i]);
    int cnt=0;
    for(int i=N-1; i>=0; i--){
        while(cost[i]<=K){
            K-=cost[i];
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}