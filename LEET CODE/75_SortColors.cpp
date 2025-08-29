// # include<iostream>
// # include<vector>
// # include<algorithm>
// using namespace std;
// void sortarr(vector<int>&v){
//     int noz=0;
//     int noo=0;
//     int notw=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) noz++;
//         else if(v[i]==1) noo++;
//         else notw++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<noz) v[i] =0;
//         else if(i<(noz+noo)) v[i]=1;
//         else v[i]=2;
//     }
// }
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     // sort 0 and 1 and 2
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     display(v);
//     sortarr(v);
//     display(v);
// }


// another processes
 // dutch algorithm
 // using 3 parameter and one loop
 # include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void sortarr(vector<int>&v){
int low = 0;
int mid =0;
int high = v.size()-1;
while(mid<high){
    if(v[mid]==2){
        int temp =v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
    else if(v[mid]==0){
        int temp=v[mid];
        v[mid]=v[low];
        v[low]=temp;
        mid++;
        low++;

    }
    else mid++;
}
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // sort 0 and 1 and 2
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    display(v);
    sortarr(v);
    display(v);
}