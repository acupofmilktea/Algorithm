//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#define MAX 10001
using namespace std;
class stack{
    int top;
public:
    int stk[MAX];
    stack() {top=-1;}//top초기화
    void push(int n);
    void pop();
    void size();
    void empty();
    void topPrint();
};
void stack::push(int n) {
    stk[++top]=n;
}
void stack::pop() {
    if(top<0) {
        cout<<-1;
    } else {
        cout<<stk[top--];
    }
    cout<<"\n";
}
void stack::size() {
    if(top<0) {
        cout<<0;
    } else {
        cout<<top+1;
    }
    cout<<"\n";
}
void stack::empty() {
    if(top<0) {
        cout<<1;
    } else {
        cout<<0;
    }
    cout<<"\n";
}
void stack::topPrint() {
    if(top<0) {
        cout<<-1;
    } else {
        cout<<stk[top];
    }
    cout<<"\n";
}
int main() {
    int N;
    cin>>N;
    class stack stk;
    for(int i=0; i<N; i++) {
        string cmd; int n;
        cin>>cmd;
        if(cmd=="push") {
            cin>>n;
            stk.push(n);
        }
        if(cmd=="pop")
            stk.pop();
        if(cmd=="size")
            stk.size();
        if(cmd=="empty")
            stk.empty();
        if(cmd=="top")
            stk.topPrint();
    }
    return 0;
}