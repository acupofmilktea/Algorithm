//
// Created by az91t on 2019-05-23.
//

#include <iostream>

int main() {
    int N, sum=0;
    std::cin>>N;

    std::string n;
    std::cin>>n;
    for(int i=0; i<N; i++) {
        if(n[i]!='0') {
            sum+=n[i]-'0';
        }
    }
    std::cout<<sum;
    return 0;
}