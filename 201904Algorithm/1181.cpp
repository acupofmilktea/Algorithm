#include <iostream>
#include <string>
#define swap(x, y, temp) ((temp)=(x), (x)=(y), (y)=(temp))
using namespace std;

int main() {
    int N, least;
    cin>>N;

    string arr[N], temp;
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<N-1; i++) {
        least=i;

        for(int j=i+1; j<N; j++) {
            if(arr[j].length()<arr[least].length()) {
                least = j;
            }

            if(arr[j].length()==arr[least].length()
            && arr[j].compare(arr[least])<0) {//j번째 원소가 사전순으로 least보다 앞이면
                least=j;
            }
        }

        if(i!=least) {
            swap(arr[i], arr[least], temp);
        }
    }

    for(int i=0; i<N; i++) {
        if(i>0&&arr[i].compare(arr[i-1])==0) {
            continue;
        }
        cout<<arr[i]<<"\n";
    }

    return 0;
}