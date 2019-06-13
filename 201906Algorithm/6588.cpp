//
// Created by az91t on 2019-06-08.
//

#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n) {
    if(n==3)
        return true;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    for (int i = 0; i < 100000; i++) {
        int n;
        scanf("%d", &n);
        if (n == 0)
            break;
        bool possible = false;
        for (int j = 3; j <= n/2; j += 2) {
            if (isPrime(j) && isPrime(n - j)) {
                printf("%d = %d + %d\n", n, j, n - j);
                possible = true;
                break;
            }
        }
        if (!possible)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}