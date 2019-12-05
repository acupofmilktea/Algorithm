//
// Created by az91t on 2019-11-05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie();
    int n;
    cin>>n;

    long long fibonacci[90+1]={0,};
    // 변수 타입 int로 해서 틀림(범위 문제)
    // -> 최대 수 넣어보고 생각하자
    // 동적 할당해서 런타임에러
    fibonacci[0]=0, fibonacci[1]=1;

    for(int i=2; i<n+1; i++){
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }

    cout<<fibonacci[n]<<endl;
    return 0;
}