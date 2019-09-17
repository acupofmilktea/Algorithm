#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie();
    int N;
    cin>>N;
    int num[N];
    for(int i=0; i<N; i++)
        cin>>num[i];
    sort(num, num+N);
    int ans=0;
    for(int i=0; i<N; i++){
        ans+=abs(num[N-i-1]-num[i]);

    }
    return 0;
}