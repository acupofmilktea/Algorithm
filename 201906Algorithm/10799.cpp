//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    string p;//pipe
    cin>>p;
    int count=0, sum=0;
    for(int i=1; i<p.size(); i++) {
        if(p[i-1]=='('&&p[i]=='(') {
            count++;
        }
        if(p[i-1]=='('&&p[i]==')') {
            sum+=count;
        }
        if(p[i-1]==')'&&p[i]==')') {
            count--;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}