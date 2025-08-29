// akta array thakba 2 to element alada thakaba bake sob element 2 bar kore thakaba
# include<iostream>
using namespace std;
int main(){
    int arr[]={4,8,3,5,7,9,1,4,1,3,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result=0;
    for(int i=0;i<n;i++){
        result = result^arr[i];
    }
    int temp =result;
    int k =0; //find which index 1 
    while(true){
        if((temp&1)==1) break;
        temp = temp>>1;
        k++;
    }

    int first = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num>>k)&1)==1) first^=num;
    }
    cout<<first<<" ";
    result = result^first;
    cout<<result<<" ";
}
