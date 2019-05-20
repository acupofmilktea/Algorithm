//
// Created by az91t on 2019-05-19.
//

//아예 잘못 생각함

#include <iostream>
using namespace std;
int position, numberOfStairs, step, sum, stairs[301]={0,};

int maxSum(int position, int sum, int step) {
    //연속된 세개의 계단을 밟아서는 안 됨: step으로 체크
    //시작점은 계단에 포함되지 않음: 시작-첫번째-두번째계단 가능
    while(position!=numberOfStairs) {
        cout<<stairs[position]<<" "<<sum<<"\n";
        if(position==numberOfStairs-2) {
            //position=numberOfStairs;
            if(step>=1) {
                //두계단 한꺼번에 오름
                sum+=stairs[numberOfStairs];
            } else {
                //한계단씩 오르니까
                sum+=stairs[numberOfStairs-1]+stairs[numberOfStairs];
            }
            break;
        }

        if(position==numberOfStairs-1) {
            //position=numberOfStairs;
            sum+=stairs[numberOfStairs];
            break;
        }

        if(step==2) {
            position+=2;
            sum+=stairs[position];
            step=1;
            continue;
        }

        if(stairs[position+1]>=stairs[position+2]) {
            if(step<=1) {
                position+=1;
                step++;
            } else {
                position+=2;
                step=1;
            }
        } else {
            position+=2;
            step=1;
        }

        sum+=stairs[position];
    }

    cout<<"-------"<<"\n";
    return sum;
}

int main() {
    cin>>numberOfStairs;

    for(int i=1; i<=numberOfStairs; i++) {
        cin>>stairs[i];
    }

    if(numberOfStairs==1) {
        cout<<stairs[1]<<"\n";
        return 0;
    }//계단 개수 1개면 종료

    int sum1=maxSum(1,stairs[1],1), sum2=maxSum(2,stairs[2],1);
    cout<<sum1<<" "<<sum2<<"\n";
    cout<<max(sum1, sum2)<<"\n";
    return 0;
}