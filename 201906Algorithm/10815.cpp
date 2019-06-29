//
// Created by az91t on 2019-06-28.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, M, m, i;
    scanf("%d", &N);
    int card[N];
    for(i=0; i<N; i++)
        scanf("%d", &card[i]);
    sort(card, card+N);
    scanf("%d", &M);
    for(i=0; i<M; i++){
        scanf("%d", &m);
        int low=0, high=N-1, mid, get=0;
        while(low<=high){
            mid=(low+high)/2;
            if(card[mid]==m){
                get++;
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