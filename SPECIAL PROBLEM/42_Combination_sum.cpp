// combination of element and if element sum is target value then print
# include<iostream>
# include<vector>
using namespace std;
void combination(int arr[],int n,vector<int>v,int target,int index){
    if(target==0){ // if target = 0 so, my code also done and print the element
        for(int i=0;i<v.size();i++){// every time my new vector creat
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    if(target<0)return ; // target = -1 . so code finish nothing to print
    for(int i=index;i<n;i++){ 
        // ami bolta chachhi 2 jadi nay tar thaka choto kouka nabo na baro nabo sabsamoy
        // jadi 3 nay 2 ar nabo na 3 r baro nabo
        v.push_back(arr[i]); 
        combination(arr,n,v,target-arr[i],i);  // puro 2 tar pore ke asta pare sob combination dekha 3 jaba
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5}; // i take array
    int n = sizeof(arr)/sizeof(arr[0]); // array size
    vector<int>v; // my vector
    int target =8; // sum target value
    combination(arr,n,v,target,0); 
}