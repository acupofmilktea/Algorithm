//
// Created by az91t on 2019-06-28.
//
//한번에 푸는 법은 모르겠네 하지만 이게 효율적인 것 같다
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, M, m, i;
    scanf("%d", &N);
    int card[N], num[N];
    for(i=0; i<N; i++){
        scanf("%d", &card[i]);
        num[i]=1;
    }
    sort(card, card+N);
    for(i=1; i<N; i++){
        if(card[i]==card[i-1])
            num[i]+=num[i-1];
    }
    for(i=N-1; i>1; i--){
        if(card[i]==card[i-1])
            num[i-1]=num[i];
    }
    scanf("%d", &M);
    for(i=0; i<M; i++){
        scanf("%d", &m);
        int low=0, high=N-1, mid, get=0;
        while(low<=high){
            mid=(low+high)/2;
            if(card[mid]==m){
                get=num[mid];
                break;
            }else if(card[mid]>m){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        printf("%d ", get);
    }
    return 0;
}