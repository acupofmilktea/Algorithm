//
// Created by az91t on 2019-06-07.
//

#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int arr[26]={0,};
    for(int i=0; i<s.size(); i++) {
        arr[s[i]-'a']++;
    }
    for(int i=0; i<26; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}