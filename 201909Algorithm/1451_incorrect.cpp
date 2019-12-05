//
// Created by az91t on 2019-09-17.
//

#include <iostream>
using namespace std;
//브루트포스 문제
//끝부분 설정을 어케 하는지 모르겠다 ㅜㅜ 바보인가봐

int sq[102][102]={0,};
int ijSum(int m, int n, int i, int j){
    int sum=0;
    for(int s=m; s<=i; s++){
        for(int e=n; e<=j; e++){
            sum+=sq[s][e];
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    int N, M;
    cin>>N>>M;
    string str;
    int sum=0;
    for(int i=0; i<N; i++){
        cin>>str;
        for(int j=0; j<M; j++){
            sq[i+1][j+1]=str[j]-'0';
            sum+=sq[i+1][j+1];
        }
    }
    for(int i=0; i<N; i++) {
        for (int j = 0; j < M; j++) {
            cout << sq[i + 1][j + 1] << " ";
        }
        cout << "\n";
    }
    cout<<"sum: "<<sum<<"\n";
    int a, b, c, maxVal=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            a=ijSum(1,1,i,j), b=ijSum(i,1,N,j), c=ijSum(i,1,N,j);
            maxVal=max(maxVal, max(a*b*(sum-a-b), a*c*(sum-a-c)));
        }
    }
    cout<<maxVal<<endl;
    return 0;
}