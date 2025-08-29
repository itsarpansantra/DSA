# include<iostream>
# include<vector>
using namespace std;
void marge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int n1 = a.size(); 
    int n2 = b.size(); 
    int n = ans.size(); //marge two array
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) {
           ans[k]=a[i];
           k++;
           i++;
        }
        else{
            ans[k]=b[j];
            j++;
            k++;

        }
    }
    if(i==n1){
        while(j<n2){
            ans[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==n2){
        while(i<n1){
            ans[k]=a[i];
           k++;
           i++;
        }
    }


}
void mergeSort(vector<int>&v){
    int n= v.size();
    if(n==1)return ;
    int n1 =n/2;
    int n2 = n-(n/2);
    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    vector<int>b(n2);
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    marge(a,b,v);
}

int main(){
    int arr[]={5,6,3,7,8,9,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}