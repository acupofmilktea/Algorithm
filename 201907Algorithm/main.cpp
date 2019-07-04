#include <iostream>
using namespace std;
int main(){
    cin.tie();
    int N, M;
    cin>>N>>M;
    int i, j, chess[N][M];
    for(i=0; i<N; i++){
        string str;
        cin>>str;
        for(j=0; j<M; j++){
            if(str[j]==66){
                chess[i][j]=1;//검
            }else{
                chess[i][j]=0;//흰
            }
        }
    }
    i=0, j=0;
    while(i+8<=N&&j+8<=M){
        
    }
    return 0;
}