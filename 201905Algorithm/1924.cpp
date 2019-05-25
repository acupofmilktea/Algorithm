//
// Created by az91t on 2019-05-23.
//

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;

    int sum=y;
    for(int i=1; i<x; i++) {
        if(i==2) {
            sum+=28;
        } else if(((i%2==1)&&i<8)||i==8||i==10||i==12) {
            sum+=31;
        } else if(i==4||i==6||i==9||i==11) {
            sum+=30;
        }
    }

    string day;
    if(sum%7==1) {
        day="MON";
    } else if(sum%7==2) {
        day="TUE";
    } else if(sum%7==3) {
        day="WED";
    } else if(sum%7==4) {
        day="THU";
    } else if(sum%7==5) {
        day="FRI";
    } else if(sum%7==6) {
        day="SAT";
    } else {
        day="SUN";
    }
    cout<<day;
    return 0;
}