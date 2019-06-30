//
// Created by az91t on 2019-06-29.
//
//min인 지점을 알아내서 피해서 가게하도록 해야함
//짝수*짝수일 때만 고치면 된다
#include <iostream>
using namespace std;
int main(){
    int R, C;
    //R행 C열
    scanf("%d %d", &R, &C);
    int field[R][C], i, j;
    for(i=0; i<R; i++){
        for(j=0; j<C; j++)
            scanf("%d", &field[i][j]);
    }
    int direction=1;
    if(R%2==1){
        //오른쪽으로 시작
        for(i=0; i<R; i++){
            for(j=0; j<C-1; j++){
                if(direction==1)
                    printf("R");
                else
                    printf("L");
            }
            direction=(direction==1) ? 0:1;
            if(i==R-1)
                break;
            printf("D");
        }
    }else if(C%2==1){
        //아래쪽으로 시작
        for(i=0; i<C; i++){
            for(j=0; j<R-1; j++){
                if(direction==1)
                    printf("D");
                else
                    printf("U");
            }
            direction=(direction==1) ? 0:1;
            if(i==C-1)
                break;
            printf("R");
        }
    }else{//R과 C 모두 짝수이면 min인 지점을 피해서 가야한다
        for(i=0; i<C-2; i++){
            for(j=0; j<R-1; j++){
                if(direction==1)
                    printf("D");
                else
                    printf("U");
            }
            direction=(direction==1) ? 0:1;
            printf("R");
        }
        if(R>2){
            printf("R");
            for(i=1; i<R-2; i++){
                if(direction==1)
                    printf("DL");
                else
                    printf("DR");
                direction=(direction==1) ? 0:1;
            }
            printf("D");
        }
        if(field[R-2][C-1]>field[R-1][C-2])
            printf("RD");
        else
            printf("DR");
    }
    return 0;
}