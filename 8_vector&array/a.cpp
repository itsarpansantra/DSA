# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int triping(vector<int>&v){
    int n  = v.size();
    // find next previous element

    int prev[n];
    int max = v[0];
    prev[0]=-1;
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<v[i]) max = v[i];
    }

    int next[n];
    max = v[n-1];
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<v[i]) max= v[i];
    }

    int mini[n];
    for(int i=0;i<n;i++){
        mini[i]=min(next[i],prev[i]);
    }

    int water =0;
    for(int i=1;i<n-1;i++){
        if(mini[i]>v[i]){
            water+=(mini[i]-v[i]);
        }
    }
    return water;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array element: ";
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    cout<<triping(v);
}