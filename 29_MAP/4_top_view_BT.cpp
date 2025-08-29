# include<iostream>
# include<vector>
# include<queue>
# include<climits>
# include<unordered_map>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int arr[] , int n){
    queue<Node*>q;
    Node *root = new Node(arr[0]); // first node createkorlam
    q.push(root); // queue te oi element push koram
    int i=1;
    int j=2; // 2 pointer rhaklam traerse er janno

    while(q.size()>0 && i<n ){
        Node *temp = q.front();
        q.pop();
        Node *r; // akta right node 
        Node *l; // ar akta left node
        if(arr[i]!=INT_MIN) l =new Node(arr[i]); // left node push 
        else l =NULL;
        if(j!=n && arr[j]!=INT_MIN) r= new Node(arr[j]); // right node push 
        else r = NULL;
        temp->left = l; // temp r left l connect korlam
        temp->right = r;
        // abar ader k queue te push korbo
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void topview(Node *root){
    unordered_map<int,int>m; //level ar root->value
    queue <pair<Node*,int> >q; // pair baniachi level ar element dia 
    pair<Node*,int> r;
    r.first =root; 
    r.second =0; // level 
    q.push(r); // root,level ai rokom push hoba queue te
    while(q.size()>0){
        Node *temp = (q.front()).first; // value ta 
        int level = (q.front()).second; // ata oi level ta
        q.pop(); // dia queu thaka bar kore debo
        if(m.find(level)==m.end()){ // oi level ta jodi map na thaka
            m[level] = temp->val; // map level ar value ta insert kore dilam
        }
        if(temp->left!=NULL){ // left
            pair<Node*,int> p; // nutun akta pair banalam
            p.first =temp->left; 
            p.second =level-1; // level 
            q.push(p); 
        }
        if(temp->right!=NULL){ // right
            pair<Node*,int> s; // nutun akta pair banalam
            s.first =temp->right; 
            s.second =level+1; // level 
            q.push(s); 
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;

    for(auto x: m){ // oi map travel kore min, max level khujbo
        int levl = x.first;
        minLevel = min(levl,minLevel);
        maxLevel = max(levl,maxLevel);
    }
    for(int i=minLevel ; i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node *a = construct(arr,n);
    topview(a);
    
}