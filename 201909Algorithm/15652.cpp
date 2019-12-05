//
// Created by az91t on 2019-11-11.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> arr;
int visited[10] = {0,};
void dfs(int start) {
    if(arr.size() == M) {
        for(int i=0; i<M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start; i<=N; i++) {
        if(visited[i] < M) {
            visited[i]++;
            arr.push_back(i);
            dfs(i);
            arr.pop_back();
            visited[i] = 0;
        }
    }
}

int main() {
    // 1부터 N까지 자연수 중에서 M개를 고른 수열
    // 같은 수를 여러 번 골라도 된다
    cin >> N >> M;

    if(M == 1) {
        for(int i=1; i<=N; i++) {
            cout << i << "\n";
        }
        cout << endl;
        return 0;
    }

    dfs(1);

    return 0;
}