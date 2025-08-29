# include<iostream>
using namespace std;
class MinHeap{
    public:
    int arr[50];
    int idx;
    MinHeap(){
        idx =1;
    }
    int top(){
        return arr[1] ; 
    }
    void push(int val){
        arr[idx]=val;
        int i = idx;
        idx++;
        // swaping i and parent 
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    void pop(){
        idx--; // push hota hota index baira baria jay taka abar thik position nia alam
        arr[1]=arr[idx]; // last ja node ta acha taka first nia alam
        // rearrangement

        int i =1;
        while(true){
            int left = 2*i , right = 2*i+1;
            if(left>idx-1) break; // left jodi index thaka baria jay
            if(right>idx-1){ // right jodi index thaka baria jay kintu 
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            else{
                if(arr[i]>arr[right]){
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1; // karon 0 use hochha na 
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
   MinHeap pq;
   pq.push(10);
   pq.push(20);
   pq.push(11);
   cout<<pq.top()<<" "<<pq.size()<<endl;
   pq.push(30);
   pq.push(40);
   pq.push(12);
   pq.push(4);
   pq.push(7);
   pq.display();
   pq.pop();
   pq.pop();
   pq.display();
   cout<<pq.size();
}