/*
Input: g = [1,2,3], s = [1,1]
Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
*/

# include<iostream>
# include<string>
# include<algorithm>
# include<vector>
using namespace std;
int cookie(vector<int>&a,vector<int>&b){
    sort(a.begin(),a.end()); // sort korlam grid arrray
    sort(b.begin(),b.end()); // sort korlam cookie arrray
    int i =0; // for grid
    int j =0; // for cookie
    int count=0;
    while(i<a.size() && j<b.size()){
        if(b[j]>=a[i]){ // cookie basi ba samn hota hoba grid r thaka
            count++;
            i++;
            j++;
        }
        else j++; // cookie kom hola sudhu j r index barba
    }
    return count;
}
int main(){
    int arr []={16,15,14,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        a[i]=arr[i];
    }
    int brr[]={5,6,7,8,9,15,14,13,10,16};
    int m = sizeof(brr)/sizeof(brr[0]);
    vector<int>b(m);
    for(int i=0;i<m;i++){
        b[i]=brr[i];
    }

    cout<<cookie(a,b);
}