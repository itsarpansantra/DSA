# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    vector<int>v2(v.size());
    for(int i=0;i<v2.size();i++){
      // i+j =v.size()-1;
      int j = v.size()-1-i;
      v2[i]=v[j]; 
      // amra atao korta partam v2[i]=v[v.size()-i-1];
    }
    display(v2);
}
