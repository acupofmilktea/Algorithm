//
// Created by az91t on 2019-06-29.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    cin.tie();
    string N;
    cin>>N;
    vector<int> digit;
    int cntZero=0, sum=0, tmp;
    for(int i=0; i<N.size(); i++){
        tmp=N[i]-'0';
        if(tmp==0)
            cntZero++;
        sum+=tmp;
        digit.push_back(tmp);
    }
    //30의 배수는 3의 배수 X 10
    //0이 없거나 각 자리수의 합이 3의 배수가 아니면 불가능
    if(cntZero==0||sum%3!=0){
        cout<<-1;
        return 0;
    }
    sort(digit.begin(), digit.end());
    for(int i=digit.size()-1; i>=0; i--){
        cout<<digit[i];
    }
    return 0;
}