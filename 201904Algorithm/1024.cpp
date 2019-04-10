#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, L, half;
    queue<int> list;
    cin>>N>>L;

    int sum=0;
    for(int i=2; i<N/2; i++) {
        if(N%i==0) { //i가 N의 약수일 때만 나눔
            cout<<"i로 나눈 queue : ";

            for(int j=N/i-i/2; j<=N/i+i/2; j++) {
                list.push(j);
                cout<<j<<" ";
                sum+=j;
            }

            if(sum==N&&list.size()>=L) {
                while(!list.empty()) {
                    cout<<list.front()<<" ";
                    list.pop();
                }
                return 0;
            }
        }
    }

    if(list.size()>100 || list.size()<L || list.empty()) {
        cout<<-1;
    }

    return 0;
}