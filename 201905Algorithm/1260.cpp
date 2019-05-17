//
// Created by az91t on 2019-05-16.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

vector<int> graph[1001];
stack<int> stkList;
queue<int> queList;
bool check1[1001], check2[1001];

void depthFirstSearch(int start) {
    cout<<start<<" ";
    M--;

    if(!stkList.empty()) {
        stkList.pop();
    }



    if(stkList.empty()||M==0) {
        cout<<"\n";
        return;
    }

    depthFirstSearch(N, M, stkList.top());
}

void breadthFirstSearch(int N, int M, int start) {
    cout<<start<<" ";
    M--;

    if(!queList.empty()) {
        queList.pop();
    }

    for(int i=1; i<=N; i++) {
        if(graph[start][i]>0) {
            queList.push(i);
            graph[start][i]--;
            graph[i][start]--;
        }
    }

    if(queList.empty()||M==0) {
        cout<<"\n";
        return;
    }

    breadthFirstSearch(N, M, queList.front());
}

int main() {
    int N, M, V;//정점개수, 간선 개수, 탐색시작번호
    cin>>N>>M>>V;

    for(int i=0; i<M; i++) {
        int p, q;
        cin>>p>>q;
        graph[p].push_back(q);
        graph[q].push_back(p);
    }

    for(int i=1; i<=N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    return 0;
}