//
// Created by az91t on 2019-07-04.
//

#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int N;
    cin>>N;
    int gen=1000001;
    for(int i=N; i>1; i--){
        int sum=i, tmp=i;
        while(tmp!=0){
            sum+=tmp%10;
            tmp/=10;
        }
        if(sum==N&&i<gen)
            gen=i;
    }
    if(gen==1000001){
        cout<<0<<endl;
    }else{
        cout<<gen<<endl;
    }
    return 0;
}