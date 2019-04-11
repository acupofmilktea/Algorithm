//
// Created by mtoc227 on 2019-04-11.
//

#include <iostream>

int main() {
    int N;
    scanf("%d", &N);

    if(N==0) {
        printf("0");
        return 0;
    }

    int n=0, count=0;
    while(count<N) {
        int copy=n, temp=n%10, diff=temp;
        copy/=10;
        while(copy!=0) {
            diff=copy%10-temp;
            if(diff>0) {
                temp=copy%10;
            } else {
                break;
            }
            copy/=10;
        }

        if(diff>0) {
            count++;
        }
        n++;
    }

    if(count==N) {
        printf("%d", n-1);
    } else {
        printf("-1");
    }

    return 0;
}