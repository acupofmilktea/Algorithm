//
// Created by az91t on 2019-06-07.
//
//걍 110, 111 같은 배열 만들어놓고 숫자에 따라서 출력시키는 방법도 있음
#include <iostream>
#include <stack>
using namespace std;
string n;
stack<int> stk;
int main() {
    cin.tie();
    cin>>n;
    if(n=="0") {
        cout<<0;
        return 0;
    }
    int temp=0;
    for(int i=n.size()-1; i>=0; i--) {
        temp=n[i]-'0';
        int arr[3]={0,};
        while(temp!=0) {
            if(temp>3) {
                arr[2]=1;
                temp-=4;
            } else if(temp>1) {
                if(i==0&&arr[2]==0) {
                    arr[2]=-1;
                }
                arr[1]=1;
                temp-=2;
            } else if(temp>0){
                if(i==0&&arr[2]==0&&arr[1]==0) {
                    arr[1]=arr[2]=-1;
                }
                arr[0]=1;
                temp-=1;
            }
        }
        for(int j=0; j<3; j++) {
            if(arr[j]!=-1) {
                stk.push(arr[j]);
            }
        }
    }
    while(!stk.empty()) {
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}