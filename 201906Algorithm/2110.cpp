//
// Created by az91t on 2019-06-28.
//
//왼쪽부터 차례대로
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();
    int N, C, i;
    cin>>N>>C;
    int house[N];
    for(i=0; i<N; i++)
        cin>>house[i];
    sort(house, house+N);
    int low=0, high=house[N-1], mid, cnt, next, ans=0;
    while(low<=high){
        mid=(low+high)/2;
        cnt=1, next=0;
        for(i=1; i<N; i++){
            if(house[i]>=house[next]+mid){
                cnt++;
                next=i;
            }
        }
        if(cnt>=C){
            if(mid>ans)
                ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}