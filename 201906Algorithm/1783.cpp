//
// Created by az91t on 2019-06-30.
//
//좀 더 간단히 생각했어도 될 문제. 참고해서 풀었다
#include <iostream>
using namespace std;
int N, M;
int main(){
    cin.tie();
    //체스말은 오른쪽으로만 이동함
    //세로, 가로
    cin>>N>>M;
    if(N==1){
        cout<<1<<endl;
    }else if(N==2){
        //최대 4칸
        cout<<min(4, (M+1)/2)<<endl;
    }else{
        //모두 사용 후 1,4 번갈아 가면서 사용
        if(M<=6){
            //6까지는 최대 4칸
            cout<<min(4, M)<<endl;
        }else{
            //7부터는 2 뺀 것
            cout<<3+(M-5)<<endl;
        }
    }
    return 0;
}