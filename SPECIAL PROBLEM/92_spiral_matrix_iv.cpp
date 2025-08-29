/*
You are given two integers m and n, which represent the dimensions of a matrix.

You are also given the head of a linked list of integers.

Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), 
starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
*/
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
vector<vector<int>> spiral(int m , int n,Node*head){ 
    vector<vector<int>> arr(m,vector<int>(n,-1)); // this 2d matrix structure , initially all element -1
    int minr=0;
    int minc=0;
    int maxr = m-1;
    int maxc = n-1;

    Node*temp = head;
    // spiral matrix structure
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            if(temp==NULL) return arr;
            arr[minr][j]=temp->val;
            temp=temp->next;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        // down

        for(int i=minr;i<=maxr;i++){
             if(temp==NULL) return arr;
            arr[i][maxc]=temp->val;
            temp=temp->next;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        // left

        for(int i=maxc;i>=minc;i--){
             if(temp==NULL) return arr;
            arr[maxr][i]=temp->val;
            temp=temp->next;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        // up

        for(int i=maxr;i>=minr;i--){
             if(temp==NULL) return arr;
            arr[i][minc]=temp->val;
            temp=temp->next;
        }
        minc++;
    }
    return arr;
}
void display(vector<vector<int>>&v){
    int m = v.size();
    int n = v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter row: ";
    cin>>m;
    cout<<"Enter Column: ";
    cin>>n;
    vector<vector<int>>v;
    Node *a = new Node(0);
    Node *b = new Node(1);
    Node *c = new Node(2);
    a->next=b;
    b->next=c;

    v= spiral(m,n,a); // return 2d matrix
    display(v);
}