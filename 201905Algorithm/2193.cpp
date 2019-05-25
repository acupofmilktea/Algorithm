//
// Created by az91t on 2019-05-25.
//

#include <iostream>

int main() {
    int n, i;
    scanf("%d", &n);

    if(n==1) {
        printf("1");
        return 0;
    }

    long long pn[2][91];
    std::fill(pn[0], pn[0]+91, 0);
    std::fill(pn[1], pn[1]+91, 0);

    pn[1][0]=1;
    for(i=1; i<n; i++) {
        pn[1][i]+=pn[0][i-1];
        pn[0][i]+=pn[1][i-1];
        if(i==0) continue;
        pn[0][i]+=pn[0][i-1];
    }

    printf("%lld", pn[0][n-1]+pn[1][n-1]);
    return 0;
}