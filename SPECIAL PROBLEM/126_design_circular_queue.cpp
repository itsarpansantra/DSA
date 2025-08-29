// remove all the element present at even position of the queue . consider 0 based index
# include<iostream>
# include<vector>
using namespace std;
class MYCircularQueue{
public:
    int f;//front
    int b;//back // rear
    int s ; // say current size of queue
    int c ; // capacity of queue 
    vector<int>arr; // array r jaygay vector create kore dilam
    MYCircularQueue(int k){ // k =val 
        f = 0;
        b = 0;
        s = 0;
        c = k; // capacity asala k . jata input asba . mana array r size 
        vector<int>v(k);
        arr=v;
    }
    bool enQueue(int val){ // push back
        if(s==c) return false; // jodi array size ar capacity same hoye jay takhn
        arr[b]=val;
        b++;
        if(b==c) b=0; // b jodi capacity saman hoye jay . mana ba ar c jodi array last index thaka 
        // ar array r ager dika jayga faka thaka to b k aga nia chola asbo . element push korer janno
        s++;
        return true;
    }
    bool DeQueue(){ // pop Front 
        if(s==0) return false;
        f++;
        if(f==c) f=0; // f jodi array thaka baria jay taka abar start nia asta hoba
        s--;
        return true;
    }
    int front(){
        if(s==0) return -1;
        return arr[f];
    }
    int back(){ // rear
        if(s==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1]; // karon b array er baira baria jay
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    bool isFull(){
        if(s==c) return true;
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
    MYCircularQueue q(5);// 5 ta hochha size 
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.display();
    q.enQueue(40);
    q.enQueue(50);
    q.display();
    q.DeQueue();
    q.display();
}