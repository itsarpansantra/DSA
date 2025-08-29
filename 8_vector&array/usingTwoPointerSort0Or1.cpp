// sort 0 or 1
# include<iostream>
# include<vector>
using namespace std;
void sort(vector<int> &v){
    int n= v.size(); // array size 
    int i=0, j = n-1; // i hachha array first element ar j hochha last elemant
    while(i<j){ // loop lagalam i jadi j r thaka choto hoy 
        if(v[i]==1 && v[j]==0){  // condition check 
        int temp = v[i]; // swaping
        v[i]=v[j];
        v[j]=temp;
        i++; // jadi condition heat kore increment
        j--;
        }
        if(v[i]==0) i++; // again condition
        if(v[j]==1) j--;
    }
    cout<<endl;
    return ;
}
void display(vector<int> &a){ // display value
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Ente array size: ";
    cin>>n;
    cout<<"Enter aray Elements: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p); // input
    }
    display(v);
    sort(v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" "; // sort value print
    // }
    display(v);
    cout<<endl;
}
