/*
A critical point in a linked list is defined as either a local maxima or a local minima.

A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.

A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.

Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].

Input: head = [5,3,1,2,5,1,2]
Output: [1,3]
Explanation: There are three critical points:
- [5,3,1,2,5,1,2]: The third node is a local minima because 1 is less than 3 and 2.
- [5,3,1,2,5,1,2]: The fifth node is a local maxima because 5 is greater than 2 and 1.
- [5,3,1,2,5,1,2]: The sixth node is a local minima because 1 is less than 5 and 2.
The minimum distance is between the fifth and the sixth node. minDistance = 6 - 5 = 1.
The maximum distance is between the third and the sixth node. maxDistance = 6 - 3 = 3.
*/
# include<iostream>
# include<vector>
# include<climits>
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
vector<int>critical_path(Node *head){
    Node *a = head; // 3 ta pointer 
    Node*b = head->next;
    Node *c = head->next->next;
    if(c==NULL) return {-1,-1}; // ata 2 to node hola
    int idx =1;
    int fidx = -1; // first critical index
    int sidx =-1; // second critical index
    while(c!=NULL){
        if((b->val<a->val && b->val<c->val) || (b->val>a->val && b->val>c->val)){ // b ar thaka ar c ar thaka choto ba baro
            if(fidx==-1) fidx =idx;
            else sidx =idx;
        }
        a = a->next;
        b= b->next;
        c = c->next;
        idx++;
    }
    if(sidx==-1) return {-1,-1}; // akta critical path thakla
    int max_distance = sidx-fidx;


    // abar ghure sab k inisialize korbo minimum_idx khujar janno
    a = head;
    b = head->next;
    c = head->next->next;
    fidx = -1; 
    sidx =-1; 
    idx =1;
    int min_distance =INT_MAX;

      while(c!=NULL){
        if((b->val<a->val && b->val<c->val) || (b->val>a->val && b->val>c->val)){ 
            fidx =sidx;
            sidx=idx;
        if(fidx!=-1){ // first idx -1 hola taka jodi - kora hoy  negative chola asba
            int d =  sidx-fidx;
            min_distance = min(d,min_distance);
        }
        }
        a = a->next;
        b= b->next;
        c = c->next;
        idx++;
    }

    return {min_distance,max_distance};
    
}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    Node*a = new Node(5);
    Node*b = new Node(3);
    Node*c = new Node(1);
    Node*d = new Node(2);
    Node*e = new Node(5);
    Node*f = new Node(1);
    Node*g = new Node(2);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    display(a);
    v =critical_path(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }

}