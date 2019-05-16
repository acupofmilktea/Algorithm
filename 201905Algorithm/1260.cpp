//
// Created by az91t on 2019-05-16.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void depthFistSearch(vector<int> graph[], bool* check, int start) {
    cout << start << " ";

    int count = 0;
    for (int i = 0; i < graph[start].size(); i++) {
        start = graph[start][i];
        if (!check[start]) {
            check[start] = true;
            depthFistSearch(graph, check, start);
        }
    }
}

void breadthFirstSearch(vector<int> graph[], bool* check, int start) {
    cout<<start<<" ";

}

int main() {
    int N, M, V;//정점개수, 간선 개수, 탐색시작번호
    cin>>N>>M>>V;

    vector<int> graph[N+1];
    for(int i=0; i<M; i++) {
        int p, q;
        cin>>p>>q;
        graph[p].push_back(q);
        graph[q].push_back(p);
    }

    for(int i=1; i<N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    bool check[N];
    depthFistSearch(graph, check, V);

    return 0;
}
