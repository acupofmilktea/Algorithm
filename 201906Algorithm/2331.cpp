//
// Created by az91t on 2019-06-13.
//

#include <iostream>
#define MAX 1000001
using namespace std;
int num[MAX], cnt=0;
int check[MAX]={0,};
int pow(int n, int p){
    if(p==0)
        return 1;
    return n*pow(n, p-1);
}
int main() {
    int A, P, i, j;
    cin>>A>>P;
    num[0]=A;
    for(i=0; i<MAX; i++){
        int next=0;
        check[num[i]]++;
        if(check[num[i]]==2)
            break;
        int tmp=num[i];
        while(tmp!=0){
            next+=pow(tmp%10, P);
            tmp/=10;
        }
        num[i+1]=next;
    }
    for(j=0; j<=i; j++){
        if(check[num[j]]==2)
            break;
    }
    cout<<j;
    return 0;
}