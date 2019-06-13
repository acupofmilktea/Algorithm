//
// Created by az91t on 2019-06-10.
//

#include <iostream>
#define MAX 10000001
using namespace std;
int arr[MAX];
int getMax(int n) {
    int max=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}//최대값 구함
void countSort(int n, int exp) {
    int output[n];//출력
    int i, count[10]={0,};
    //count에 arr[i]의 자릿수 개수 셈
    //첫번째 실행에서 첫번째 자릿수가 5면 count[5]++
    for(i=0; i<n; i++)
        count[(arr[i]/exp)%10]++;
    //실제 위치를 구하기 위해서는 i-1의 값을 i에 더해줘야 함
    //자릿수가 더 큰 값이 더 뒤에 있을 테니까
    for(i=1; i<10; i++)
        count[i]+=count[i-1];
    //인덱스를 1씩 낮춰서 넣어준다
    //n번째 실행에서는 n번째 자리가 작은 것부터 들어가게됨
    //n-1부터 실행하므로 에러날 일 없음
    for(i=n-1; i>=0; i--) {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(i=0; i<n; i++)
        arr[i]=output[i];
}
void radixSort(int n) {
    int max=getMax(n);
    for(int exp=1; max/exp>0; exp*=10)
        countSort(n, exp);
    //10을 곱해가며 countSort
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    radixSort(n);
    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);
    return 0;
}