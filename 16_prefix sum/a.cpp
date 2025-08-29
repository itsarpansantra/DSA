# include<iostream>
# include<vector>
using namespace std;
vector<int>product(vector<int>&v){
    int n = v.size();
    vector<int>prefix(n);
    vector<int>sufix(n);
    int p =v[0];
    prefix[0] = 1;
    for(int i=1;i<n;i++){
        prefix[i]=p;
        p*=v[i];
    }
    p=v[n-1];
    sufix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        sufix[i]=p;
        p*=v[i];
    }

    for(int i=0;i<n;i++){
        prefix[i]=prefix[i]*sufix[i];
    }
    return prefix;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v);
    vector<int>ans = product(v);
    display(ans);
}