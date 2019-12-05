//
// Created by az91t on 2019-11-17.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int tc = 1; tc <= T; tc++){
        cout << "Case #" << tc << ": ";

        int N;
        int input;
        int score = 0;
        priority_queue<int, vector<int>, greater<int> > Q; // min heap
        cin >> N;

        for(int i = 0; i < N; i++){
            cin >> input;
            if(input > score) Q.push(input);
            if(Q.size() > score){
                score++;
                while(!Q.empty() && Q.top() <= score) Q.pop();
            }
            cout << score << " ";
        }
        cout << "\n";
    }
    return 0;
}