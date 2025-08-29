/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/
#include<iostream>
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
 void inserAtEnd(Node *&head , int val){
    Node *ptr = new Node(val);
    if (head==NULL) { // check linkedlist empty or not
        head = ptr;
        return;
    }

    Node* temp = head;
    while (temp->next!=NULL){
         temp = temp->next; // basically oi lister NULL ager node temp thakba 
    }
       
    temp->next = ptr; // ar oi temper last amar node ta add hoye jaba
    
 }

Node* merge(Node *head1 , Node*head2){
    Node *c = new Node(100);
    Node *tempc = c;
    while(head1!=NULL && head2!=NULL){
        if(head1->val<=head2->val){
            tempc->next = head1;
            head1= head1->next;
            tempc = tempc->next;
        }
        else{
            tempc->next = head2;
            head2= head2->next;
            tempc = tempc->next;
        }
  
    }
    if(head1==NULL){
         tempc->next = head2;
     }
    else{
         tempc->next = head1;
    }
    return c->next;
 }
 void display(Node *head){
    Node *temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
int main(){
    Node *head1=NULL;
    Node *head2=NULL;

    // first list
    inserAtEnd(head1,10);
    inserAtEnd(head1,20);
    inserAtEnd(head1,30);

    display(head1);
    // second list
    inserAtEnd(head2,20);
    inserAtEnd(head2,30);
    inserAtEnd(head2,40);
    inserAtEnd(head2,60);

    
    display(head2);

    Node *a;
    a= merge(head1,head2);
    display(a);
}



// another method


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
//  void inserAtEnd(Node *&head , int val){
//     Node *ptr = new Node(val);
//     if (head==NULL) { // check linkedlist empty or not
//         head = ptr;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next!=NULL){
//          temp = temp->next; // basically oi lister NULL ager node temp thakba 
//     }
       
//     temp->next = ptr; // ar oi temper last amar node ta add hoye jaba
    
//  }

// Node* merge(Node *head1 , Node*head2){
//     Node *tempA = head1; // ata akta pointer first list rhakbo
//     Node *tempB = head2; // ar akta pointer jeta parer node list thakba
//     Node *c = new Node(-1); // ata akta node banabo . resultent bolta gala
//     Node *tempC = c; // ata tao akta pointer rhakbo jeta travel korta thakba

//     while(tempA!=NULL && tempB!=NULL ){ // kono akta list null jatokhan na hoy
//         if(tempA->val<=tempB->val){ // jodi first node er value kom hoy 
//             Node *ptr = new Node(tempA->val); // basically ata akta node tairi halo , jeta first list first value . ai vaba addd hota thakba
//             tempC->next=ptr;// jeta c te tempc baniachilam tar satha coonect kore debo
//             tempC=ptr;
//             tempA=tempA->next;
//         }
//         else{// jodi second noder value kom hoy
//              Node *ptr = new Node(tempB->val);
//             tempC->next=ptr;
//             tempC=ptr;
//             tempB=tempB->next;
//         }
//         if(tempA==NULL){
//             tempC->next=tempB;
//         }
//         else{
//             tempC->next=tempA;
//         }
//     }
//     return c->next; // karon c r value 100 oi ta to assume kore chi . taii tar porer value ta nabo

//  }
//  void display(Node *head){
//     Node *temp =head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
//  }
// int main(){
//     Node *head1=NULL;
//     Node *head2=NULL;

//     // first list
//     inserAtEnd(head1,10);
//     inserAtEnd(head1,20);
//     inserAtEnd(head1,30);

//     display(head1);
//     // second list
//     inserAtEnd(head2,20);
//     inserAtEnd(head2,30);
//     inserAtEnd(head2,40);
//     inserAtEnd(head2,60);

    
//     display(head2);

//     Node *a;
//     a= merge(head1,head2);
//     display(a);
// }