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
void quicksort(int arr[],int si , int ei){// si = starting index , ei = ending index
    if(si>=ei) return ;
    // find pivot
    int pi = partion(arr,si,ei);

    // recursion
    
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}