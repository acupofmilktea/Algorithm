#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int digit[10]={0,};
    cin>>N;

    int i=0;
    while(N!=0) {
        digit[i]=N%10;
        N/=10;
        i++;
    }
    sort(digit, digit+10);

    for(int j=9; j>=10-i; j--) {
        cout<<digit[j];
    }

    return 0;
}