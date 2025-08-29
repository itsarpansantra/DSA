// find kth smallest element in an aray using quick sort
# include<iostream>
using namespace std;
int partion(int arr[],int si , int ei){
    // find pivot index
    int pivotElement = arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}
int kthsmallest(int arr[],int si , int ei , int k){// si = starting index , ei = ending index

    int pi = partion(arr,si,ei);

    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
}
    

    
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =5;
    cout<<kthsmallest(arr,0,n,k);
    
}