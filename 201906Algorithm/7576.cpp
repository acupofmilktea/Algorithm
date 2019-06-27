//
// Created by az91t on 2019-06-14.
//

#include <iostream>
#include <vector>
using namespace std;
int box[1002][1002];
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0};
vector<pair<int,int>> v;
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    for(int i=0; i<=N+1; i++){
        for(int j=0; j<=M+1; j++)
            box[i][j]=-1;
    }
    int cntZero=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++) {
            scanf("%d", &box[i][j]);
            if(box[i][j]==1)
                v.emplace_back(i,j);
            if(box[i][j]==0)
                cntZero++;
        }
    }
    int day=0;
    vector<pair<int, int>> tmp;
    while(!v.empty()){
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<4; j++){
                int ni=v[i].first+vi[j], nj=v[i].second+vj[j];
                if(box[ni][nj]==0){
                    box[ni][nj]=1;
                    tmp.emplace_back(ni, nj);
                    cntZero--;
                }
            }
        }
        if(tmp.empty())
            break;
        v.clear();
        while(!tmp.empty()){
            v.push_back(tmp.back());
            tmp.pop_back();
        }
        day++;
    }
    if(cntZero>0){
        printf("-1");
    }else{
        printf("%d", day);
    }
    return 0;
}