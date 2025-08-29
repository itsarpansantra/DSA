# include<iostream>
#include<vector>
using namespace std;
vector<int>  merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m =arr2.size();
    vector<int>res(m+n);
    int i=0; //arr1
    int j=0;//arr2
    int k=0;// res
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<=m-1){
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
  return res;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int>arr1;
    arr1.push_back(2);
    arr1.push_back(6);
    arr1.push_back(8);
    arr1.push_back(11);
    arr1.push_back(13);

   display(arr1);
    cout<<"  ";
    vector<int>arr2;
    arr2.push_back(1);
    arr2.push_back(3);
    arr2.push_back(7);
    arr2.push_back(9);
    arr2.push_back(15);
    arr2.push_back(18);

    display(arr2);

    cout<<endl;

    vector<int>v= merge(arr1,arr2);

    display(v);
    }

    //merge two non desending order array
// # include<iostream>
// #include<vector>
// using namespace std;
//   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int i = m - 1;      // nums1's index (the actual nums)
//     int j = n - 1;      // nums2's index
//     int k = m + n - 1;  // nums1's index (the next filled position)
//     while (j >= 0){
//       if (i >= 0 && nums1[i] > nums2[j]){
//         nums1[k] = nums1[i];
//         i--;
//       }
//       else{
//         nums1[k] = nums2[j];
//         j--;
//       }
//     }
//     k--;
//   }    
//     int main(){
//     vector<int>arr1;
//     vector<int>arr2;
//     int m = arr1.size();
//     int n = arr2.size();
//      merge(arr1,m,arr2,n);
//     }