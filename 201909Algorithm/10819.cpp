//
// Created by az91t on 2019-09-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//next_permutation을 이용해서 푸는 문제
//완전탐색(모든 경우를 다 조사해봄)
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0; i<N; i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());
    int sum=0;
    do{
        int tmp=0;
        for(int i=1; i<N; i++)
            tmp+=abs(arr[i-1]-arr[i]);
        sum=max(sum, tmp);
    }while(next_permutation(arr.begin(), arr.end()));
    //bool값 반환하는 함수

    cout<<sum<<endl;
    return 0;
}