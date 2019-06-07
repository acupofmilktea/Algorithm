//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++) {
        if(s[i]>='A'&&s[i]<='Z') {
            if(s[i]+13<='Z') {
                s[i]=s[i]+13;
            } else {
                s[i]='A'+(s[i]+13)%91;
            }
        }
        if(s[i]>='a'&&s[i]<='z') {
            if(s[i]+13<='z') {
                s[i]=s[i]+13;
            } else {
                s[i]='a'+(s[i]+13)%123;
            }
        }
    }
    cout<<s;
    return 0;
}