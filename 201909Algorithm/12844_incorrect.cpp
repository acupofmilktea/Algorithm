//
// Created by az91t on 2019-09-17.
//

#include <iostream>
#include <vector>
#define MAX 500001
using namespace std;

//이걸 합이 아니라 XOR로 해서 풀어야함

long long arr[MAX];
typedef struct Tree{
    long long value, lazy;
};
Tree tree[3*MAX];

//lazy propagation 이용
//https://bowbowbow.tistory.com/4 참고
//https://www.acmicpc.net/blog/view/9 참고

//최초로 Segment Tree의 값 지정
long long init(int node, int start, int end){
    if(start==end)
        return tree[node].value=arr[start];
    else
        return tree[node].value=init(node*2, start, (start+end)/2)+init(node*2+1, (start+end)/2+1, end);
}

//i~j 구간에 diff만큼 더해줄 때 Segment Tree를 업데이트하는 함수
void update_range(int node, int start, int end, int i, int j, long long diff){
    //lazy가 남아있을 때
    if(tree[node].lazy!=0){
        tree[node].value+=(end-start+1)*tree[node].lazy;
        if(start!=end){
            tree[node*2].lazy+=tree[node].lazy;
            tree[node*2+1].lazy+=tree[node].lazy;
        }
        tree[node].lazy=0;
    }

    if(j<start||i>end) return;

    //대표 구간을 찾았을 때
    if(i<=start&&end<=j){
        tree[node].value+=(end-start+1)*diff;
        if(start!=end){
            tree[node*2].lazy+=diff;
            tree[node*2+1].lazy+=diff;
        }
        return;
    }
    update_range(node*2, start, (start+end)/2, i, j, diff);
    update_range(node*2+1, (start+end)/2+1, end, i, j, diff);

    tree[node].value=tree[node*2].value+tree[node*2+1].value;
}

//i번째 값부터 j번째 값까지의 합을 구하는 함수
long long sum(int node, int start, int end, int i, int j){
    if(tree[node].lazy!=0){
        tree[node].value+=(end-start+1)*tree[node].lazy;
        if(start!=end){
            tree[node*2].lazy+=tree[node].lazy;
            tree[node*2+1].lazy+=tree[node].lazy;
        }
        tree[node].lazy=0;
    }

    if(i>end||j<start) return 0;
    if(i<=start&&end<=j) return tree[node].value;
    return sum(node*2, start, (start+end)/2, i, j)+sum(node*2+1, (start+end)/2+1, end, i, j);
}

void XOR(int a, int b, int c){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(c==-1){
        long long xorValue=arr[a];
        for(int i=a+1; i<=b; i++){
            xorValue^=arr[i];
        }
        cout<<xorValue;
    }else{
        for(int i=a; i<=b; i++)
            arr[i]^=c;
    }
}

int main() {
    cin.tie();
    int n;
    cin>>n;//수열의 크기
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int m;//쿼리 개수
    cin>>m;
    while(m>0){
        int t, a, b, c;
        //t:쿼리종류 a, b:구간
        cin>>t>>a>>b;
        if(t==1){
            cin>>c;
            XOR(a,b,c);
        }else{
            XOR(a,b,-1);
        }
        m--;
    }
    return 0;
}