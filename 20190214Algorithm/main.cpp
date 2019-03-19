#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    if(n<=1) {
        return false;
    }

    for(int i=2; i<=sqrt(n); i++) {
        if((n%i)==0) {
            return false;
        }
    }

    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    int min = M;
    int sum = 0;

    while (M <= N) {
        if(isPrime(M)) {
            min=M;
            break;
        }
        M++;
    }

    while (M <= N) {
        if(isPrime(M)) {
            sum+=M;
        }
        M++;
    }

    if(sum!=0) {
        cout<<sum<<"\n"<<min;
    } else {
        cout<<-1;
    }

    return 0;
}