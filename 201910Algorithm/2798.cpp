//
// Created by az91t on 2019-11-05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie();
    int N, M;
    cin >> N >> M;

    int card[N];
    for(int i=0; i<N; i++)
        cin>>card[i];

    sort(card, card+N);

    int ans=0;
    for(int i=0; i<N-2; i++){
        if(card[i]+card[i+1]+card[i+2] > M)
            break;
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                int tmp = card[i]+card[j]+card[k];
                if(tmp>=ans && tmp<=M){
                    ans = tmp;
                    if(ans == M){
                        cout << ans << endl;
                        return 0;
                    }
                }

            }
        }
    }

    cout<< ans << endl;
    return 0;
}