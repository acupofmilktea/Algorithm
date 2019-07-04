//
// Created by az91t on 2019-07-04.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();
    int dwarf[9], i, j, sum=0;
    for(i=0; i<9; i++){
        cin>>dwarf[i];
        sum+=dwarf[i];
    }
    sort(dwarf, dwarf+9);
    for(i=0; i<8; i++){
        for(j=i+1; j<9; j++){
            if(sum-dwarf[i]-dwarf[j]==100){
                for(int k=0; k<9; k++){
                    if(k!=i&&k!=j)
                        cout<<dwarf[k]<<"\n";
                }
                return 0;
            }
        }
    }
}