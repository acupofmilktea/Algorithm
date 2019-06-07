//
// Created by az91t on 2019-06-07.
//
//벡터 안에 구조체/페어 넣어서 풀 수 있는데 페어가 더 효율적
//근데 직관적으로 하려면 구조체이지 않을까?

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct stdnt {
    string name;
    int kor;
    int eng;
    int math;
};

bool cmp(stdnt s1, stdnt s2) {
    if(s1.kor>s2.kor) {
        return true;
    }
    if(s1.kor==s2.kor&&s1.eng<s2.eng) {
        return true;
    }
    if(s1.kor==s2.kor&&s1.eng==s2.eng&&s1.math>s2.math) {
        return true;
    }
    if(s1.kor==s2.kor&&s1.eng==s2.eng&&s1.math==s2.math) {
        return s1.name.compare(s2.name)<0;
    }
    return false;
}

vector<stdnt> list;
int main() {
    cin.tie();
    unsigned int N;
    stdnt s;
    cin>>N;
    list.resize(N);
    for(int i=0; i<N; i++) {
        cin>>s.name;
        cin>>s.kor;
        cin>>s.eng;
        cin>>s.math;
        list.push_back(s);
    }
    sort(list.begin(), list.end(), cmp);
    for(int i=0; i<N; i++) {
        cout<<list[i].name<<"\n";
    }
    return 0;
}