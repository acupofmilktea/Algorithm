//
// Created by az91t on 2019-06-29.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 100001
vector<pair<int,int>> v;
int main(){
    cin.tie();
    int N;
    cin>>N;
    int start, end;
    for(int i=0; i<N; i++){
        cin>>start>>end;
        v.emplace_back(end, start);
    }
    sort(v.begin(), v.end());
    int cnt[MAX];
    for(int i=1; i<N; i++){

    }
    for(int i=0; i<N; i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<cnt[i]<<"\n";
    }
    return 0;
}