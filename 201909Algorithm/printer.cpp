//
// Created by az91t on 2019-11-26.
//

#include <vector>
#include <string>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;

    int target = priorities[location];
    queue<pair<int, int>> q;
    for(int i=0; i<priorities.size(); i++)
        q.emplace(priorities[i], i);

    while(true) {
        bool isBigger = false;
        pair<int, int> front = q.front();

        for(int i=0; i<priorities.size(); i++) {
            if(priorities[i] > front.first) {
                isBigger = true;
                break;
            }
        }

        if(!isBigger) {
            if(front.second == location) {
                break;
            } else {
                answer++;
                priorities[front.second] = -1;
                q.pop();
            }
        } else {
            q.pop();
            q.push(front);
        }
    }

    return answer;
}