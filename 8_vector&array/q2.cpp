//WAP to find the largest three elements in the array.
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int main(){
    int arr[]={2,5,6,7,3,9};   
    int n=sizeof(arr)/sizeof(arr[0]);
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>max1) max1=v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>max2 && v[i]!=max1) max2=v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>max3 && v[i]!=max2 && v[i]!=max1) max3=v[i];
    }
    cout<<"Three gratese element in the array: "<<max3<<","<<max2<<","<<max1;
}