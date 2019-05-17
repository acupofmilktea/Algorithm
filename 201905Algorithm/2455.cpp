//
// Created by az91t on 2019-05-17.
//

#include <iostream>
using namespace std;

int main() {
    int station[5][2];

    int in, out, train=0, max=train;
    for(int i=1; i<=4; i++) {
        cin>>in>>out;
        station[i][0]=in;
        station[i][1]=out;

        train+=out-in;
        if(train>max) {
            max=train;
        }
    }

    cout<<max<<"\n";
    return 0;
}