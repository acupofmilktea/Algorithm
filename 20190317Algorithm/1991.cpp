#include <iostream>
using namespace std;

struct node {
    char left;
    char right;
};

struct node arr[100];

void preorder(char root) {
    if(root=='.') {
        return;
    }

    cout<<root;
    preorder(arr[root].left); //루트-왼쪽-오른쪽 순으로 순회
    preorder(arr[root].right);
}

void inorder(char root) {
    if(root=='.') {
        return;
    }

    inorder(arr[root].left);
    cout<<root; //왼-루트-오른 순으로 순회
    inorder(arr[root].right);
}

void postorder(char root) {
    if(root=='.') {
        return;
    }

    postorder(arr[root].left);
    postorder(arr[root].right);
    cout<<root; //왼-오른-루트 순으로 순회하니까 출력을 그렇게 해주는 것
}
int main() {
    int N;
    cin>>N;

    char t1, t2, t3;
    for(int i=0; i<N; i++) {
        cin>>t1>>t2>>t3;
        arr[t1].left=t2;
        arr[t1].right=t3;
    }

    preorder('A');
    cout<<"\n";
    inorder('A');
    cout<<"\n";
    postorder('A');
    cout<<"\n";

    return 0;
}