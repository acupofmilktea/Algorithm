//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    for(int i=0; i<T; i++) {
        string paren;
        cin>>paren;
        if(paren[0]==')') {
            printf("NO\n");
            continue;
        }
        int check[52]={0,}; check[0]=1;
        for(int j=1; j<paren.size(); j++) {
            if(paren[j]==')') {
                check[j]=check[j-1]-1;
            } else {
                check[j]=check[j-1]+1;
            }
            if(check[j]<0) {
                check[paren.size()-1]=-1;
                break;
            }
        }
        if(check[paren.size()-1]==0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}