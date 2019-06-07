//
// Created by az91t on 2019-06-07.
//

#include <iostream>
#define MAX 10000001
#define swap(x,y,temp)((temp)=(x), (x)=(y), (y)=(temp))
using namespace std;

int partition (int arr[], int low, int high) {
    int pivot=arr[high];
    int i=low-1, temp;
    for(int j=low; j<=high-1; j++) {
        if(arr[j]<=pivot) {
            i++;//low인덱스 증가
            swap(arr[i],arr[j], temp);
        }
    }
    swap(arr[i+1], arr[high], temp);
    return (i+1);
}

void quickSort(int arr[], int low, int high) {
    if(low<high) {
        int part=partition(arr, low, high);
        quickSort(arr, low, part-1);
        quickSort(arr, part+1, high);
    }
}

int num[MAX];
int main() {
    int N;
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>num[i];
    }
    quickSort(num, 0, N-1);
    for(int i=0; i<N; i++) {
        cout<<num[i]<<"\n";
    }
    return 0;
}