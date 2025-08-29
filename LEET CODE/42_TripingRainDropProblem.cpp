# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
// leet code
int RainWater(vector<int>&v){
    int n= v.size();
    int prev[n];
    prev[0]=-1;
    int max=v[0];
    for(int i=0;i<n;i++){
        prev[i]=max;
        if(max<v[i]) max=v[i];
    }

    // step2: next greatest element of array
     // not using extra array . we update previous array
    prev[n-1]=-1;
    max=v[n-1];
    for(int i=n-2;i>=0;i--){
       if(max<prev[i]) prev[i]=max;
          if(max<v[i]) max=v[i]; 
    }

    // find water
    int water=0;

    for(int i=1;i<n-1;i++){
        if(v[i]<prev[i]){
            water+= (prev[i]-v[i]);
        }
    }
    return water;
}

    int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
     v[i]=arr[i];
    }
    cout<<RainWater(v);
 }

// int main(){
//     int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // step1: previous greatest element of array
//     int prev[n];
//     prev[0]=-1;
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         prev[i]=max;
//         if(max<arr[i]) max=arr[i];
//     }

//     // step2: next greatest element of array

//     int next[n];
//     next[n-1]=-1;
//     max=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         next[i]=max;
//           if(max<arr[i]) max=arr[i]; 
//     }


//     // minimum array
//      // override previous array . so we dont creat a minimum array
//     int mini[n];
//     for(int i=0;i<n;i++){
//         prev[i]=min(prev[i],next[i]);
//     }

//     // find water
//     int water=0;

//     for(int i=1;i<n-1;i++){
//         if(arr[i]<prev[i]){
//             water+= (prev[i]-arr[i]);
//         }
//     }
//     cout<<water;
// }