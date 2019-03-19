#include <iostream>
#include <cstring>

void test(int** box, int N, int M) {
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=M; j++) {
            printf("%d ", box[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N); //M:가로칸 수, N:세로칸 수

    int box[N+2][M+2];
    for(int i=0;i<N+2; i++) {
        memset(box[i], -1, sizeof(int)*(M+2));
    }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            scanf("%d", &box[i][j]);
        }
    }

    return 0;
}