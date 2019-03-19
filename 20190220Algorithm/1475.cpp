#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin>>N;

    int digitArr[7]={0,};
    int idx=0;
    while(N!=0) {
        digitArr[idx]=N%10;
        N/=10;
        idx++;
    }
    sort(digitArr, digitArr+7);

    int count=0;
    int sixNineCount=0;
    for(int i=0; i<7; i++) {
        if (digitArr[i] == 6 || digitArr[i] == 9) {
            sixNineCount++;
        }
    }

    for(int i=1; i<7; i++) {
        if(digitArr[i-1]==6 || digitArr[i-1]==9) {
            continue;
        } else {
            if(digitArr[i-1]==digitArr[i]) {
                count++;
            }
        }
    }

    cout<<count<< " "<<sixNineCount<<"\n";
    if(sixNineCount<=count) {
        cout<<count<<"\n";
    } else {
        if(sixNineCount%2==0) {
            sixNineCount=sixNineCount/2;
        } else {
            sixNineCount=sixNineCount/2+1;
        }
        cout<<sixNineCount<<"\n";
    }

    return 0;
}