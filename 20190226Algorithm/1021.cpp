#include <iostream>
#include <deque>
using namespace std;

int indexOfPos(deque<int> dq, int pos) {
    for(int i=0; i<dq.size(); i++) {
        if(pos==dq[i]) {
            return i;
        }
    }
}

int main() {
    int N, M;
    cin>>N>>M;

    deque<int> dq;
    for(int i=1; i<=N; i++) {
        dq.push_back(i);
    }

    int count=0;
    while(M>0) {
        int pos;
        cin>>pos;

        for(int i=1; i<=dq.size(); i++) {
            if(pos==dq.front()) {
                dq.pop_front();
                break;
            } else {
                if(indexOfPos(dq, pos)<dq.size()/2+1) {
                    int temp=dq.front();
                    dq.pop_front();
                    dq.push_back(temp);
                    count++;
                } else {
                    int temp=dq.back();
                    dq.pop_back();
                    dq.push_front(temp);
                    count++;
                }
            }
        }
        M--;
    }

    cout<<count;
    return 0;
}