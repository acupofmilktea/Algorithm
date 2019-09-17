//
// Created by az91t on 2019-09-17.
//

#include <iostream>
using namespace std;

int main(){
    cin.tie();
    int N, C, M;
    //N: 난쟁이 수, C: 모자 색상의 수, M: 사진의 수
    cin>>N>>C;
    int arr[N];
    for(int i=0; i<N; i++)
        cin>>arr[i];
    cin>>M;
    while(M>0){
        int A, B;
        //A는 B보다 작거나 같음
        cin>>A>>B;
        //반절이상 모자 색이 같으면 예쁜 사진
        //구간 합 구하기 이것도 세그먼트 트리인 듯
        M--;
    }
    return 0;
}