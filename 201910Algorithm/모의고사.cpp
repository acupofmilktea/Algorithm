//
// Created by az91t on 2019-10-11.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int supoja[3][10] = {{1,2,3,4,5,0,0,0,0,0},
                         {2,1,2,3,2,4,2,5,0,0},
                         {3,3,1,1,2,2,4,4,5,5}};
    int n[3] = {5,8,10}, a[3] = {0,};

    for(int i=0; i<3; i++){
        for(int j=0; j<answers.size(); j++){
            int idx = j%(n[i]-1);
            if(supoja[i][idx] == answers[j]) {
                a[i]++;
            }
        }
    }

    cout << a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    int ans = max(a[0], max(a[1], a[2]));
    for(int i=0; i<3; i++){
        if(ans == a[i])
            answer.push_back(i+1);
    }

    return answer;
}

int main() {
    vector<int> s = solution({1,3,2,4,2});
    return 0;
}