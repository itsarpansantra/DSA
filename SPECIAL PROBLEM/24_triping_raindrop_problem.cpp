# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // step1: previous greatest element of array
    int prev[n];
    prev[0]=-1;
    int max=arr[0];
    for(int i=0;i<n;i++){
        prev[i]=max;
        if(max<arr[i]) max=arr[i];
    }

    // step2: next greatest element of array

    int next[n];
    next[n-1]=-1;
    max=arr[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
          if(max<arr[i]) max=arr[i]; 
    }


    // minimum array

    int mini[n];
    for(int i=0;i<n;i++){
        mini[i]=min(prev[i],next[i]);
    }

    // find water
    int water=0;

    for(int i=1;i<n-1;i++){
        if(arr[i]<mini[i]){
            water+= (mini[i]-arr[i]);
        }
    }
    cout<<water<<" ";
}



    
// next processes
// # include<iostream>
// # include<vector>
// # include<algorithm>
// using namespace std;
// int triping(vector<int>&v){
//     int n=v.size();
//     int prev[n];
//     prev[0]=-1;
//     int max = v[0];
//     for(int i=1;i<n;i++){
//         prev[i]=max;
//         if(max<v[i]) max=v[i];
//     }
//     int next[n];
//     next[n-1]=-1;
//     max=next[n-1];
//     for(int i=n-2;i>=0;i--){
//         next[i]=max;
//         if(max<v[i]) max=v[i];
//     }
//     int mini[n];
//     for(int i=0;i<n;i++){
//         mini[i]=min(prev[i],next[i]);
//     }

//     int water=0;
//     for(int i=1;i<n-1;i++){
//         if(v[i]<mini[i]){
//             water+=(mini[i]-v[i]);
//         }
//     }
// return water;

// }
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     //display(v);
//     cout<<triping(v);
//    
// }