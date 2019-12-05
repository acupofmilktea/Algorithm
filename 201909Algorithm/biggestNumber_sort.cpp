//
// Created by az91t on 2019-11-27.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 두 개 더해서 앞뒤 뒤앞 중 더 큰 것을 앞에 배치

bool compare(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    for(int n : numbers) {
        v.push_back(to_string(n));
    }
    sort(v.begin(), v.end(), compare);
    for(string s : v)
        answer += s;
    if(answer[0] == '0')
        return "0";
    return answer;
}