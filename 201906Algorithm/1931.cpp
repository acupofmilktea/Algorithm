//
// Created by az91t on 2019-06-30.
//
//끝시간으로 정렬했기 때문에 가능한 풀이. 참고해서 풀었다...
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> v;
int main(){
    int N;
    scanf("%d", &N);
    int start, end;
    for(int i=0; i<N; i++){
        scanf("%d %d", &start, &end);
        v.emplace_back(end, start);
    }
    sort(v.begin(), v.end());
    int next=0, cnt=0;
    for(int i=0; i<N; i++){
        start=v[i].second, end=v[i].first;
        if(start>=next){
            next=end;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}