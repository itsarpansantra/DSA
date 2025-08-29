// remove all the element present at even position of the queue . consider 0 based index
# include<iostream>
# include<vector>
using namespace std;
class Queue{
public:
    int f;//front
    int b;//back
    int s ; // say current size of queue
    vector<int>arr; // array r jaygay vector create kore dilam
    Queue(int val){
        f = 0;
        b = 0;
        s = 0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full "<<endl;
            return ;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){ // basically array size
            cout<<"Queue is empty"<<endl;
            return ;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){ // basically array size
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){ // basically array size
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[b-1]; // karon b array er baira baria jay
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q(5);// 5 ta hochha size 
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
}