//
// Created by mtoc227 on 2019-04-11.
//

#include <iostream>

int main() {
    int N;
    scanf("%d", &N);

    int n=0, count=0;

    /*0 1 2 3 4 5 6 7 8 9
10
21 20
32 31 30
...
98	 90

210
321 320/ 310
432 431 430/ 421 420/ 410
...
987~980/976~970/.../910 (8+...+1)

3210
4321 4320/4310/4210
     */

    /*if(N==0) {
        printf("0");
        return 0;
    }

    int n=N, count=0;
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
    }*/

    return 0;
}