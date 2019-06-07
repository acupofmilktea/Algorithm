#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
string n;
stack<int> stk;
int main() {
    cin.tie();
    cin>>n;
    int temp=0, cnt=0;
    for(int i=n.size()-1; i>=0; i--) {
        temp+=(n[i]-'0')*pow(2, cnt);
        if(cnt==2||i==0) {
            stk.push(temp);
            temp=0;
        }
        cnt++;
        if(cnt==3) {
            cnt=0;
        }
    }
    while(!stk.empty()) {
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}