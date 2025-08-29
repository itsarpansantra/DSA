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
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     // swap two numbers
    //     int temp =v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // using for loop
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
    }
  //  reverse(v.begin(),v.end());
    display(v);
}