//
// Created by az91t on 2019-11-17.
//

//
// Created by az91t on 2019-11-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie();
    int T;
    cin >> T;

    for(int t=1; t<=T; t++) {
        int num[10] = {0,};
        int plusCnt=0;
        long long plusSum = 0;
        for(int i=1; i<=9; i++) {
            cin >> num[i];
            if(num[i] != 0) {
                plusCnt++;
                plusSum += num[i];
            }
        }

        string result = "NO";
        if(plusCnt==1){
            int i;
            for(i=1; i<=9; i++) {
                if(num[i] != 0)
                    break;
            }
            if(num[i]%2 == 0)
                result="YES";

            cout << "Case #" << t << ": " << result << "\n";
            continue;
        }

        long long plus[plusCnt];
        fill(plus, plus+plusCnt, 0);
        plus[plusCnt-1]=plusSum%2==0 ? plusSum/2 : plusSum/2+1;
        for(int p=0; p<plusCnt; p++) {
            do {
                int plusIdx=0;
                long long sum = 0;
                for(int i=1; i<=9; i++) {
                    if(num[i] == 0)
                        continue;
                    if(plus[plusIdx] > num[i])
                        break;
                    sum += plus[plusIdx]*i - (num[i]-plus[plusIdx])*i;
                    plusIdx++;
                }
                if(sum%11 == 0) {
                    result = "YES";
                    break;
                }
            }while(next_permutation(plus, plus+plusCnt));

            for(int i=0; i<plusCnt; i++)
                cout << plus[i] << " ";
            cout << "\n";

            if(result == "YES")
                break;

            plus[p]--;
            if(p<plusCnt-1)
                plus[p+1]++;
            sort(plus, plus+plusCnt);
        }
        cout << "Case #" << t << ": " << result << "\n";
    }
    return 0;
}