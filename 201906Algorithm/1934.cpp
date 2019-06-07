//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie();
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1 || b == 1) {
            cout << a * b << "\n";
            continue;
        }
        int n = min(a, b), m = max(a, b), rst = n;
        while (rst % m != 0) {
            rst += n;
        }
        cout << rst << "\n";
    }
    return 0;
}