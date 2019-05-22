//
// Created by az91t on 2019-05-23.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    string A, B;
    cin>>T;
    while(T>0) {
        getline(cin, A, ',');
        getline(cin, B);
        cout<<stoi(A)+stoi(B)<<"\n";
        T--;
    }
    return 0;
}