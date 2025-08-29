# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    int max_sum =0;
    for(int i=0;i<n-k;i++){
        int sum =0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(max_sum<sum){
            max_sum=sum;
        }
    }
    cout<<max_sum;
}