#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K, L;
    cin>>N>>K;

    int board[102][102]={0,};
    for(int i=0; i<K; i++) {
        int x, y;
        cin>>x>>y;
        board[y][x]=1;
    }

    cin>>L;
    int sec, count, direction, x, y;
    string rotation;
    x=1, y=1, count=0, direction=100;
    while(L>0) {
        cin>>sec;
        cin>>rotation;

        int i=1;
        if(direction%4==0) {//right
            x=x+i;
        } else if(direction%4==1) {//down
            y=y+i;
        } else if(direction%4==2) {//left
            x=x-i;
        } else {//up
            y=y-i;
        }

        for(; i<=sec; i++) {
            count++;

            if(x<1||x>N||y<1||y>N) {
                break;
            }

            if(board[y][x]==1) {
                board[y][x+1]=0;
                K--;
            }

            if(K==0) {
                break;
            }
        }

        if(rotation.compare("L")) {
            direction-=1;
        } else if (rotation.compare("D")) {
            direction+=1;
        }

        L--;
        cout<<"L: "<<L<<" direction%4: "<<direction%4<<" count: "<<count<<"\n";
    }

    cout<<count;

    return 0;
}