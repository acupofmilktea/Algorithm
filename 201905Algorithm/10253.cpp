//
// Created by az91t on 2019-05-20.
//
#include <iostream>

int main() {
    int T, a, b, denominator;
    std::cin>>T;
    while(T>0) {
        std::cin>>a>>b;
        denominator=2;
        while((a*denominator-b)!=0) {//약분이 문제
            if(b%a==0) {
                if(b/a>=denominator){
                    denominator=b/a;
                    break;
                }
            }

            if(a*denominator<b) {//a*denominator-b<0라 하면 오답나옴
                denominator++;
            }

            if (a*denominator>b) {
                a=a*denominator-b;
                b=b*denominator;
                denominator++;
            }
        }
        std::cout<<denominator<<"\n";
        T--;
    }

    return 0;
}