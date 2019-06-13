//
// Created by az91t on 2019-06-13.
//

#include <iostream>
using namespace std;
void dfs(int num[], bool check[], int n){
    if(check[n])
        return;
    check[n]=true;
    dfs(num, check, num[n]);
}
int main() {
    int T;
    scanf("%d", &T);
    while(T>0){
        int N;
        scanf("%d", &N);
        int num[1001];
        for(int i=1; i<=N; i++)
            scanf("%d", &num[i]);
        int cnt=0;
        bool check[1001]={false,};
        for(int i=1; i<=N; i++){
            if(check[i])
                continue;
            dfs(num, check, i);
            cnt++;
        }
        printf("%d\n", cnt);
        T--;
    }
    return 0;
}