//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <stack>
using namespace std;
int main() {
    int N, B;
    scanf("%d %d", &N, &B);
    stack<int> stk;
    while(N>=B) {
        stk.push(N%B);
        if(N%B==0) {
            N/=B;
        } else {
            N-=N%B;
            N/=B;
        }
    }
    stk.push(N);
    while(!stk.empty()) {
        int top=stk.top();
        if(top>=10) {
            printf("%c", 55+top);
        } else {
            printf("%d", top);
        }
        stk.pop();
    }
    return 0;
}