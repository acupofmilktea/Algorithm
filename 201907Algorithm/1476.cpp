//
// Created by az91t on 2019-07-05.
//

#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int E, S, M;
    cin>>E>>S>>M;
    while(E%28!=S%28||E%19!=M%19){
        E+=15;
    }
    cout<<E<<endl;
    return 0;
}