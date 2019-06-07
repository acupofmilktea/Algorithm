//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin>>s;
    string arr[s.size()];
    for(int i=0; i<s.size(); i++) {
        arr[i].assign(s, i, s.size()-i+1);
    }
    sort(arr, arr+s.size());
    for(int i=0; i<s.size(); i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}