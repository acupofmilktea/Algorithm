//
// Created by az91t on 2019-11-05.
//

#include <iostream>
using namespace std;

int main() {
    cin.tie();
    int N;
    cin>>N;

    if(N==1){
        cout<<666<<endl;
        return 0;
    }

    N--;
    int num=1665;
    while(N>0){
        num++;
        int count=0, tmp=num;
        while(tmp>0){
            if(tmp%10 == 6){
                count++;
            }else if(count<3){
                count=0;
            }
            tmp/=10;
        }
        if(count >= 3)
            N--;
    }

    cout << num << endl;
    return 0;
}