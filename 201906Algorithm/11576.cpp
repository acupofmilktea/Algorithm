//
// Created by az91t on 2019-06-08.
//
//출력이 양의 정수이므로 0일 경우 고려해줄 필요가 없음
#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
bool isPrime(int n) {
    if(n==1)
        return false;
    for(int i=sqrt(n); i>1; i--) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    cin.tie();
    int a, b, m;
    cin>>a>>b>>m;
    int sum=0;
    for(int i=m-1; i>=0; i--) {
        int n;
        cin>>n;
        sum+=n*pow(a, i);
    }
    stack<int> stk;
    while(sum!=0) {
        stk.push(sum%b);
        sum-=sum%b;
        sum/=b;
    }
    while(!stk.empty()) {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}