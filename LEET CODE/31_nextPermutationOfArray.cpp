# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void permutation(vector<int>&v){
    int idx=-1;
    int n = v.size();
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
        
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        return ;
    }
    reverse(v.begin()+idx+1,v.end());
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }

    }
    int temp = v[idx];
    v[idx]=v[j];
    v[j]=temp;
 return ;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
 int n;
 cout<<"Enter array size: ";
 cin>>n;
vector<int>v;
cout<<"Enter array element: ";
for(int i=0;i<n;i++){
    int p;
    cin>>p;
    v.push_back(p);
}
display(v);
 permutation(v);
 display(v);
}