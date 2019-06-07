//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <deque>
using namespace std;
int main() {
    cin.tie();
    string s; cin>>s;
    deque<char> dq;
    for(int i=0; i<s.size(); i++) {
        dq.push_back(s[i]);
    }
    int N; cin>>N;
    int cursor=s.size();
    for(int i=0; i<N; i++) {
        char cmd[4];
        scanf("%c", cmd);
        if(cmd=="P") {
            scanf("%c", cmd);
            deque<char>::iterator it=dq.begin();
            it+=cursor;
            it=dq.insert(it, cmd);
        }
        if(cmd=="L"&&cursor>0)
            cursor--;
        if(cmd=="R"&&cursor<dq.size())
            cursor++;
        if(cmd=="B"&&cursor>0) {
            dq.erase(dq.begin()+cursor);
            cursor--;
        }

    }
    return 0;
}