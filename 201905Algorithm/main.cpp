#include <iostream>
#include <algorithm>
int main() {
    int n, i, j, k;
    scanf("%d", &n);

    int series[1001];
    for(i=0; i<n; i++) {
        scanf("%d", &series[i]);
    }

    int dp[1001], max=0, minIdx, next;
    std::fill(dp, dp+1001, 0);
    for(i=0; i<n; i++) {
        minIdx=i;
        dp[minIdx]=1;
        for(j=minIdx; j<n-1; j++) {
            if(series[j+1]>series[minIdx]) {
                next=j+1;
                for(k=next; k<n-1; k++) {
                    if(series[next]>series[k+1]&&series[k+1]>series[minIdx])
                        next=k+1;
                }
                dp[next]=dp[minIdx]+1;
                minIdx=next;
                continue;
            }
        }

        if(dp[minIdx]>max)
            max=dp[minIdx];
        std::cout<<"dp[minIdx]: "<<dp[minIdx]<<"\n";
    }

    printf("%d", max);
    return 0;
}