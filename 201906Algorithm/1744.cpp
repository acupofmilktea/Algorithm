//
// Created by az91t on 2019-06-29.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();
    int N;
    cin>>N;
    int series[N], i;
    for(i=0; i<N; i++)
        cin>>series[i];
    if(N==1){
        cout<<series[0];
        return 0;
    }
    //위치에 상관없이 묶을 수 있으므로 정렬
    sort(series, series+N);
    long long sum=0;
    i=N-1;
    while(i>0){
        if(series[i]<0&&i%2==0){
            i--;
            continue;
        }
        if(series[i]*series[i-1]<=0&&i%2==1){
            if(series[i]==0){
                series[i]*=series[i-1];
                series[i-1]=0;
            }
            i=i-2;
            continue;
        }
        //양수*양수, 음수*음수의 경우
        if(series[i]*series[i-1]>0){
            series[i]=max(series[i]+series[i-1], series[i]*series[i-1]);
            series[i-1]=0;
            //i-1번째 원소는 건너뛰어도 됨
            i=i-2;
            continue;
        }
        i--;
    }
    for(i=0; i<N; i++){
        sum+=series[i];
    }
    cout<<sum<<endl;
    return 0;
}