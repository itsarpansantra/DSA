# include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    // // print array address
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // // ato rakom vaba ami address print korta parbo

    // // second index r address ke vaba pabo
    // cout<<&arr[1]<<endl;
    // cout<<arr+1<<endl;

    // // print the value of arr

    // cout<<arr[0]<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*arr<<endl;
    // cout<<*ptr<<endl;

    // //print all address
    // for(int i=0;i<5;i++){
    //     cout<<arr+i<<endl;
    // }

    // //print all the value
    // for(int i=0;i<5;i++){
    //     cout<<*(arr+i)<<endl;
    // }


    // print all the value using pointer 

    for(int i=0;i<5;i++) cout<<ptr[i]<<" ";

    //print all address
    for(int i=0;i<5;i++) cout<<ptr+i<<endl;


    // arithmetic operation 
    // print all the value
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}