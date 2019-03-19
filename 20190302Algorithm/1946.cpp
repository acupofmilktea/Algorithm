#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin>>T;

    while(T>0) {
        cin>>N;
        int cand[N][2];
        int docs_idx=0, interv_idx=0;
        for(int i=0; i<N; i++) {
            cin>>cand[i][0]>>cand[i][1];

            if(cand[i][0]==1) {
                docs_idx=i;
            }

            if(cand[i][1]==1) {
                interv_idx=i;
            }
        }

        int count;
        if(docs_idx==interv_idx) {
            count=1;
        } else {
            count=2;
        }

        for(int i=0; i<N; i++) {
            if(i==docs_idx||i==interv_idx) {
                continue;
            }

            for(int i=0)

            if(cand[i][0]<cand[interv_idx][0]||cand[i][1]<cand[docs_idx][1]) {
                cout<<"뽑힌 사원: "<<i<<"\n";
                count++;
            }
        }

        cout<<count;
        T--;
    }
    return 0;
}