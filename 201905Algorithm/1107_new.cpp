//
// Created by az91t on 2019-05-18.
//

#include <iostream>
using namespace std;
int M, brokenList[10]={0,};//고장난 버튼 리스트

bool isBroken(int n) {
    for(int i=0; i<M; i++) {
        if(n==brokenList[i]) {
            return true;
        }
    }
    return false;
}

bool isPossibleChannel(int n) {
    if(n==0) {
        if(isBroken(n)){
            return false;
        } else {
            return true;
        }
    }

    while(n!=0) {
        if(isBroken(n%10)) {
            return false;
        }
        n/=10;
    }
    return true;
}

int numberOfDigit(int n) {
    int digit=0;
    if(n==0) {
        return 1;
    }
    while(n!=0) {
        digit++;
        n/=10;
    }
    return digit;
}

int main() {
    int N, channel=100;
    cin>>N>>M;

    if(M>0) {
        for(int i=0; i<M; i++) {
            cin>>brokenList[i];
        }
    }

    if((N>97&&N<103)||M==10) {
        cout<<abs(N-channel)<<"\n";
        return 0;
    }

    int nPlus=N, nMinus=N;
    while(!isPossibleChannel(nPlus)
          &&!isPossibleChannel(nMinus)) {
        nPlus++;
        if(nMinus>0) {
            nMinus--;
        }
    }

    int possibleChannel=nPlus;
    if(isPossibleChannel(nMinus)) {
        possibleChannel=nMinus;
    }

    int min=numberOfDigit(possibleChannel)+abs(N-possibleChannel);
    if(min>abs(N-channel)) {
        min=abs(N-channel);
    }

    cout<<min<<"\n";
    return 0;
}