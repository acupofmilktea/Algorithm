#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int T;
    cin>>T;

    while(T>0) {
        char p, temp[202];
        int n;
        cin>>p>>n>>temp;

        int idx=0;
        for(int i=0; i<2*n+1; i++) {
            if(strcmp(temp[i], "[")==0) {
                IntArray[idx]=stoi(temp);
                idx++;
            }
        }

        for(int i=0; i<n; i++) {
            cout<<IntArray[i]<<" ";
        }
        T--;
    }

    return 0;
}