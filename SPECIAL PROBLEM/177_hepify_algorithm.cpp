# include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void hepify(int arr[],int n, int i){ //pop function
    while(true){
        int left  = 2*i;
        int right = 2*i+1;
        if(left>=n) break;
        if(right>=n){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }

    }
}
int main(){
   int arr[]={-1,10,2,14,11,1,4}; // -1 is fake beacuse i started index 1
   int n = sizeof(arr)/sizeof(arr[0]);
   display(arr,n);
   for(int i=n/2;i>=1;i--){ //ami dhora nabo amar leaf node sortd taii n/2 thaka check korbo
     hepify(arr,n,i);
   }
   display(arr,n);

}