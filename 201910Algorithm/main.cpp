#include <iostream>
#include <string>
using namespace std;

// 방법은 알았는데 어떻게 하는지 몰랐다 ㅠㅠ
// https://jaimemin.tistory.com/504 참고

int main() {
    string s;
    cin >> s;

    string tmp = "";
    bool isMinus = false;
    int ans = 0;
    for(int i=0; i<=s.length(); i++) {
        if(s[i] == '+' || s[i] == '-' || s[i] == '\0') {
            if(isMinus)
                ans -= stoi(tmp);
            else
                ans += stoi(tmp);

            tmp="";
            if(s[i] == 45) {
                isMinus = true;
                continue;
            }
        }
        tmp += s[i];
    }
    cout << ans << endl;
    return 0;
}