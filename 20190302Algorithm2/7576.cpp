#include <iostream>

int main() {
    int M, N;
    scanf("%d %d", &M, &N); //M:가로칸 수, N:세로칸 수

    int box[1002][1002];
    std::fill_n(box, 1002, -1);
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; i++) {
            scanf("%d", &box[i][j]);
        }
    }

    for(int i=0; i<=N; i++) {
        for(int j=0; j<=M; i++) {
            printf("%d ", box[i][j]);
        }
        printf("\n");
    }

    return 0;
}