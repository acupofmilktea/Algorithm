//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int num[MAX]={0,};
int main() {
    int N;
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>num[i];
    }
    for(int i=0; i<N-1; i++) {
        int least=i;
        for(int j=i+1; j<N; j++) {
            if(num[least]>num[j])
                least=j;
        }
        if(least!=i) {
            int temp=num[i];
            num[i]=num[least];
            num[least]=temp;
        }
    }
    for(int i=0; i<N; i++) {
        cout<<num[i]<<"\n";
    }
    return 0;
}