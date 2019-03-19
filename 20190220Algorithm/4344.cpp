#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int C;
    cin>>C;

    while(C>0) {
        int N;
        cin>>N;
        int stdnt[N];

        double average=0;
        for(int i=0; i<N; i++) {
            cin>>stdnt[i];
            average+=stdnt[i];
        }
        average=average/N;

        double overAverage=0;
        for(int i=0; i<N; i++) {
            if(stdnt[i]>average) {
                overAverage++;
            }
        }

        double ratio=(overAverage/N)*100;
        ratio=round(ratio*1000)/1000;
        printf("%.3f", ratio);
        printf("%%\n");
        C--;
    }

    return 0;
}