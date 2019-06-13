//
// Created by az91t on 2019-06-10.
//

#include <iostream>
#include <queue>
using namespace std;
int main() {
    int N, K, temp;
    scanf("%d %d", &N, &K);
    priority_queue<int, vector<int>, greater<>> pq;
    for(int i=0; i<N; i++) {
        scanf("%d", &temp);
        pq.push(temp);
    }
    while(K>1) {
        pq.pop();
        K--;
    }
    printf("%d", pq.top());
    return 0;
}