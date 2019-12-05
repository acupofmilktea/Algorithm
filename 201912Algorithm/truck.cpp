//
// Created by az91t on 2019-11-21.
//

#include <vector>
#include <queue>
using namespace std;

// https://bitwise.tistory.com/380
// 진짜 깔끔하게 풀었다.. ㅠㅠ

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

    queue<int> q;
    int sum, cnt; sum = cnt = 0;

    for(int i=0; i<truck_weights.size(); i++) {
        int truck = truck_weights[i];

        while(true) {
            if(q.empty()) {
                q.push(truck);
                cnt++;
                sum += truck;
                break;
            } else if(q.size() == bridge_length) {
                sum -= q.front();
                q.pop();
            } else {
                if(sum + truck > weight) {
                    q.push(0);
                    // 0을 넣는다(빈 값)
                    cnt++;
                } else {
                    q.push(truck);
                    cnt++;
                    sum += truck;
                    break;
                }
            }
        }
    }

    return cnt + bridge_length;
}