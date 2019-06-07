//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#include <algorithm>
#define MAX 100001
using  namespace std;
pair<int, int> xy[MAX];
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d %d", &xy[i].second, &xy[i].first);
    }
    sort(xy, xy+N);
    for(int i=0; i<N; i++) {
        printf("%d %d\n", xy[i].second, xy[i].first);
    }
    return 0;
}