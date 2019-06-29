//
// Created by az91t on 2019-06-29.
//

#include <iostream>
#define MAX 200000001
using namespace std;
int cnt=0, N, M;
int moveArr[4][2]={{1,2}, {2,1}, {2,-1}, {1,-2}};
void chess(int x, int y){
    if(x>=M||x<1||y>=N||y<1)
        return;
    cnt++;
    cout<<x<<" "<<y<<" "<<cnt<<"\n";
    for(int i=0; i<4; i++){
        chess(x+moveArr[i][0], y+moveArr[i][1]);
    }
}
int main(){
    cin.tie();
    //체스말은 오른쪽으로만 이동함
    //세로, 가로
    cin>>N>>M;
    //나이트의 위치: 체스판의 가장 왼쪽 아래(1,1)라 가정
    chess(1,1);
    cout<<cnt<<endl;
    return 0;
}