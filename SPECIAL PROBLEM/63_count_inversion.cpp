# include<iostream>
# include<vector>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
    int c=0; // c=count only this function
    int i=0; // denote a
    int j=0; // denote b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c+=(a.size()-i);
            j++;
        }
        else  i++; // (a[i]<=b[j]) 
    }
    return c;
}
void marge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int n1 = a.size(); 
    int n2 = b.size(); 
    int n = ans.size(); //marge two array
    int i=0,j=0,k=0;
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
int mergeSort(vector<int>&v){
    int n= v.size();
    int count=0;
    if(n==1)return 0 ;
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
    // recursion
    count+=mergeSort(a);
    count+=mergeSort(b);
    // count inversion
    count+=inversion(a,b);
    marge(a,b,v);
    return count;
}

int main(){
    int arr[]={5,6,3,7,8,9,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<mergeSort(v);
    
}