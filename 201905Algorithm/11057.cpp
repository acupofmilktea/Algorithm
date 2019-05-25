#include <iostream>
int num[10][1001];

int main() {
    int N, i, j, k;
    std::cin>>N;

    for(i=0; i<10; i++) {
        num[i][0]=1;
    }

    for(i=0; i<10; i++) {
        for(j=0; j<N-1; j++) {
            if(i==0) {
                num[i][j+1]+=num[i][j];
                continue;
            }
            for(k=0; k<i; k++) {
                num[i][j+1]+=num[k][j];
                num[i][j+1]%=10007;//나머지로 하지 않으면 이상한 답 나옴
            }
            num[i][j+1]+=num[i][j];
        }
    }

    int sum=0;
    for(i=0; i<10; i++) {
        sum+=num[i][N-1];
    }
    std::cout<<sum%10007<<std::endl;

    return 0;
}