//
// Created by az91t on 2019-07-04.
//
//111~999인데 0들어간 숫자, 같은 자릿수 있는 숫자 제외해야 함
#include <iostream>
using namespace std;
int N, ys[100][3];
bool isPossible(string y){
    string m;
    for(int i=0; i<N; i++){
        m=to_string(ys[i][0]);
        int strike=ys[i][1], ball=ys[i][2];
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(m[j]==y[k]){
                    if(j==k){
                        strike--;
                    }else{
                        ball--;
                    }
                }
            }
        }
        if(strike!=0||ball!=0){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie();
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++)
            cin>>ys[i][j];
    }
    int cnt=0, pass;
    for(int i=112; i<=987; i++){
        string y=to_string(i);
        pass=0;
        if(y[0]==y[1]||y[1]==y[2]||y[0]==y[2])
            pass=1;
        for(int j=0; j<3; j++){
            if(y[j]=='0'){
                pass=1;
                break;
            }
        }
        if(pass==1)
            continue;
        if(isPossible(y)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}