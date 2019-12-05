//
// Created by az91t on 2019-11-06.
//

#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int N;
    cin >> N;

    int num[1001];
    for(int i=0; i<N; i++)
        cin >> num[i];

    if(N==1) {
        cout << num[0] << endl;
        return 0;
    }

    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if(num[i]>num[j])
                swap(num[i], num[j]);
        }
    }

    for(int i=0; i<N; i++)
        cout << num[i] << "\n";
    cout << endl;

    return 0;
}