#include <iostream>
#include <vector>
using namespace std;

// 상하, 대각선 검사해서 ++해주면 될듯

int N, count = 0;
bool isExist[16];
void solution(int i) {
    if(i == N) {
        count++;
        return;
    }

    for(int j=1; j<=N; i++) {
        if(!isExist[j-1] && !isExist[j] && !isExist[j+1]){
            isExist[j] = true;
            solution(i+1);
            isExist[j] = false;
            continue;
        }
        break;
    }
}

int main() {
    cin >> N;

    if(N == 1){
        cout << 1 << endl;
        return 0;
    }

    for(int i=0; i<N; i++) {
        solution(i);
    }
    cout << count << endl;

    return 0;
}