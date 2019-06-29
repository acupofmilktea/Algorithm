//
// Created by az91t on 2019-06-29.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();
    int N;
    cin>>N;
    int P[N];
    for(int i=0; i<N; i++)
        cin>>P[i];
    sort(P, P+N);
    for(int i=1; i<N; i++)
        P[i]+=P[i-1];
    int ans=0;
    for(int i=0; i<N; i++)
        ans+=P[i];
    cout<<ans;
    return 0;
}