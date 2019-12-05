//
// Created by az91t on 2019-11-11.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> arr;
bool visited[10];
void dfs(int start) {
    if(arr.size() == M) {
        for(int i=0; i<M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start; i<=N; i++) {
        if(!visited[i]) {
            visited[i] = true;
            arr.push_back(i);
            dfs(i+1);
            arr.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    // 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열 구하기
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