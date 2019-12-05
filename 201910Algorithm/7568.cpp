#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie();
    int N;
    cin>>N;

    int data[N][2];
    for(int i=0; i<N; i++)
        cin>>data[i][0]>>data[i][1];

    int rank[N];
    fill(rank, rank+N, 1);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(data[j][0]>data[i][0] && data[j][1]>data[i][1])
                rank[i]++;
        }
    }

    for(int i=0; i<N; i++)
        cout << rank[i] <<" ";
    cout << endl;

    return 0;
}