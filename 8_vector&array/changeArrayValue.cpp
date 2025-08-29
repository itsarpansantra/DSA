# include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,6,7,2};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";// print array element
    }
    // for(int i=0;i<=4;i++){
    //     cout<<i[ptr]<<" ";array elemnt print korba. spesality of array
    // }
    // for(int i=0;i<=4;i++){
    //     cout<<i[arr]]<<" ";// print array element
    // }
    cout<<endl;
    ptr=arr;
    *ptr = 8;//change 0th index element
    ptr++; // we move 0 th to 1
    *ptr=9; // change first index element
    ptr--; // again we come 0 th place
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}