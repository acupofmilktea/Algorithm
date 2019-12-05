//
// Created by az91t on 2019-11-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie();
    int T;
    cin >> T;

    for(int t=1; t<=T; t++) {
        int num[10] = {0,}, idx = 0;
        vector<int> arr;
        for(int i=1; i<=9; i++) {
            cin >> num[i];
            if(num[i] != 0) {
                for(int j=0; j<num[i]; j++)
                    arr.push_back(i);
            }
        }

        string result = "NO";
        do {
            int sum = 0;
            for(int i=0; i<arr.size(); i++) {
                if(i%2 == 0)
                    sum += arr[i];
                else
                    sum -= arr[i];
            }
            if(sum%11 == 0) {
                result = "YES";
                break;
            }
        }while(next_permutation(arr.begin(), arr.end()));

        cout << "Case #" << t << ": " << result << "\n";
    }
    return 0;
}