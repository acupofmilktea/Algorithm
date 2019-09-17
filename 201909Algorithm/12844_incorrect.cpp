//
// Created by az91t on 2019-09-10.
//

#include <iostream>
using namespace std;
#define MAX 500001

int n, arr[MAX];
void XOR(int a, int b, int c){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(c==-1){
        int xorValue=arr[a];
        for(int i=a+1; i<=b; i++){
            xorValue^=arr[i];
        }
        cout<<xorValue;
    }else{
        for(int i=a; i<=b; i++)
            arr[i]^=c;
    }
}

int main() {
    cin.tie();
    cin>>n;//수열의 크기
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int m;//쿼리 개수
    cin>>m;
    while(m>0){
        int t, a, b, c;
        //t:쿼리종류 a, b:구간
        cin>>t>>a>>b;
        if(t==1){
            cin>>c;
            XOR(a,b,c);
        }else{
            XOR(a,b,-1);
        }
        m--;
    }
    return 0;
}