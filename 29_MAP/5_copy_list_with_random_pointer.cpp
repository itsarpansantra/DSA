# include<iostream>
# include<vector>
# include<climits>
# include<unordered_map>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node *random;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->random=NULL;
    }
};
Node *copy_list_random(Node *head){
// create a deep copy without random pointer
    Node *c = new Node(100); // c=dummy
    Node *tempc =c;
    Node *temp =head;
    while(temp!=NULL){
        Node *a = new Node (temp->val);
        tempc->next = a;
        tempc = tempc->next;
        temp = temp->next;
    }
    Node *b = c->next;
    Node *a = head;
    unordered_map<Node*,Node*>m;
    //step2 : make a map of <original,duplicate>
    Node*tempa = a;
    Node*tempb = b;
    while(tempa!=NULL){ // map a insert kore dilam value k 
        m[tempa] = tempb;
        tempa = tempa->next;
        tempb = tempb->next;
    }
    // travel every node
    for(auto x:m){
        Node *original = x.first;
        Node *duplicate = x.second;
        if(original->random!=NULL){
            Node *o = o->random; // o = original 
            Node *d = m[o->random]; // d = duplicate
            d->random = d;
        }
    }
    return b;
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
    Node*a = new Node(7);
    Node*b = new Node(13);
    Node*c = new Node(11);
    Node*d = new Node(10);
    Node*e = new Node(1);


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    Node *p =copy_list_random(a);
    display(p);

}