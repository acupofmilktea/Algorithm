//
// Created by az91t on 2019-06-28.
//

#include <iostream>
using namespace std;
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int tree[N], max = 0, min=1000000001;
    for (int i = 0; i < N; i++) {
        scanf("%d", &tree[i]);
        if (tree[i] > max)
            max = tree[i];
        if(tree[i]<min)
            min=tree[i];
    }
    long long low = 0, high = max - 1, mid, sum = 0, ans=0;
    while (low<=high) {
        mid = (low + high) / 2;
        sum = 0;
        for (int i = 0; i < N; i++) {
            if (tree[i] - mid > 0)
                sum += tree[i] - mid;
        }
        if (sum < M){
            high = mid - 1;
        }else{
            if(ans<mid)
                ans=mid;
            low = mid + 1;
        }
    }
    printf("%d", ans);
    return 0;
}