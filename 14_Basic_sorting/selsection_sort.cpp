# include<iostream>
# include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){ 
        int min = INT_MAX;
        int mindex=-1 ;// min rindex ta calculate korar janno
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindex=j;
            } 
        }
        swap(arr[mindex],arr[i]);
       
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}