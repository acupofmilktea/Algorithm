//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    cin.tie();
    int N, K;
    cin>>N>>K;
    int arr[5001]={0,};
    for(int i=0; i<N; i++) {
        arr[i]=i+1;
    }
    if(N==1) {
        cout<<"<"<<arr[0]<<">";
        return 0;
    }
    cout<<"<";
    int mod=N, next=(K-1)%mod;
    while(N>1) {
        cout<<arr[next]<<", ";
        arr[next]=0;
        int cnt=0;
        while(cnt<K) {
            next++; next%=mod;
            if(arr[next]!=0) {
                cnt++;
            }
        }
        N--;
    }
    for(int i=0; i<mod; i++) {
        if(arr[i]!=0) {
            cout<<arr[i]<<">";
            break;
        }
    }
    return 0;
}