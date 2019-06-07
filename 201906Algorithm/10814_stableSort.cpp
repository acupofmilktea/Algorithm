//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using  namespace std;
vector<pair<int, string>> member;
bool cmp(pair<int, string> m1, pair<int, string> m2) {
    if(m1.first<m2.first) {
        return true;
    }
    if(m1.first==m2.first) {
        return false;
    }
    return false;
}//stable_sort의 인수
int main() {
    int N;
    cin>>N;
    member.resize(N);
    for(int i=0; i<N; i++) {
        cin>>member[i].first>>member[i].second;
    }
    stable_sort(member.begin(), member.end(), cmp);
    for(int i=0; i<N; i++) {
        cout<<member[i].first<<" "<<member[i].second<<"\n";
    }
    return 0;
}