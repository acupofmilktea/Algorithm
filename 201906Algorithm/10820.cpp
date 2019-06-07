//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    string s;
    while(getline(cin, s)) {
        int arr[4] = {0,};//소문자, 대문자, 숫자, 공백 순
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 97 && s[i] <= 122)
                arr[0]++;
            if (s[i] >= 65 && s[i] <= 90)
                arr[1]++;
            if (s[i] >= 48 && s[i] <= 57)
                arr[2]++;
            if (s[i] == 32)
                arr[3]++;
        }
        for(int i=0; i<4; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}