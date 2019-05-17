//
// Created by az91t on 2019-05-17.
//

#include <iostream>
using namespace std;

int numberOfBroken(int n, int number[]){
    int digit, count=0;
    while(n!=0) {
        digit=n%10;
        if(number[digit]==-1) {
            count++;
        }
        n/=10;
    }
    return count;
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
    int N, M, channel=100;
    cin>>N>>M;

    int number[10];
    for(int i=0; i<=9; i++) {
        number[i]=i;
    }

    if(M>0) {//고장난 버튼이 있는 경우
        int broken;
        for(int i=0; i<M; i++) {
            cin>>broken;
            number[broken]=-1;
        }//-1이면 고장난 버튼
    }

    if((N>=97&&N<=103)||M==10) {
        cout<<abs(N-channel)<<"\n";
        return 0;
    }

    int goal1=N, goal2=N;
    while(numberOfBroken(goal1, number)!=0
    &&numberOfBroken(goal2, number)!=0) {
        goal1++;
        if(goal2>0) {
            goal2--;
        }
        //cout<<"ng1: "<<numberOfBroken(goal1,number)<<" ng2: "<<numberOfBroken(goal2,number)<<"\n";
    }
    //cout<<"goal1: "<<goal1<<" goal2: "<<goal2<<"\n";
    int min=goal1;
    if(numberOfBroken(goal2, number)==0) {
        min=goal2;
    }
    //cout<<min<<" (min) "<<numberOfDigit(min)<<"\n";
    int count=numberOfDigit(min)+abs(N-min);
    cout<<count<<"\n";

    return 0;
}