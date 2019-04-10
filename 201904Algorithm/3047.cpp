#include <iostream>
#include <algorithm>
#include <cstring>
#define swap(x, y, temp) ((temp)=(x), (x)=(y), (y)=(temp))

int main() {
    int arr[3];
    for(int i=0; i<3; i++) {
        std::cin>>arr[i];
    }
    std::sort(arr, arr+3);

    std::string num;
    std::cin>>num;

    for(int i=0; i<3; i++) {
        if(num.find("A")==i) {
            std::cout<<arr[0];
        }

        if(num.find("B")==i) {
            std::cout<<arr[1];
        }

        if(num.find("C")==i) {
            std::cout<<arr[2];
        }
        std::cout<<" ";
    }

    return 0;
}