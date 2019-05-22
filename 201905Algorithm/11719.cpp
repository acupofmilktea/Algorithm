//
// Created by az91t on 2019-05-23.
//

#include <iostream>

int main() {
    std::string str;

    while(getline(std::cin, str, '\n')) {
        std::cout<<str<<std::endl;
    }

    return 0;
}

//https://jiwondh.github.io/2017/09/23/cin.getline/ 참고