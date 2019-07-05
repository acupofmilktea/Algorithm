//
// Created by az91t on 2019-07-05.
//

#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int N, M;
    cin>>N>>M;
    int square[N][M];
    string str;
    for(int i=0; i<N; i++){
        cin>>str;
        for(int j=0; j<M; j++)
            square[i][j]=str[i]-'0';
    }

    return 0;
}