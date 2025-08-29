// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
# include<iostream>
# include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target value:  "; // ar mana hochha amar 2 tor jogfal ta kato hoba
    cin>>x;
    vector<int>v; // v namer akta vector haya jaba
    int n;
    cout<<"Enter array size: "; // akta array size dia dabo j ato dur obdi jabo
    cin>>n;
    cout<<"Enter array Elements: "; // elements dabo
    for(int i=0;i<n;i++){
        int q;
        cin>>q; // akhana akta vector array tayre hoba . jar modha value gulo thakba
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){// amar jato size r array banabo tar thaka 2 bar kom loop run karabo
        for(int j=i+1;j<=v.size()-1;j++){//amar jato size r array banabo tar thaka 1 bar kom loop run karabo
            if(v[i]+v[j]==x) // ai bar ami amar first loop r number ta k dhorbo  ar 2 number loop r sab number satha jog korbo .
            // dekhbo kon duto pair jog korla x r man ta asba . tar pair print korea dabo
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }

}
// # include<iostream>
// # include<vector>
// # include<algorithm>
// using namespace std;
// //two sum
// int twosum(vector<int>&v,int target){
//     int p=v.size();
//     for(int i=0;i<p-1;i++){
//         for(int j=i+1;j<p;j++){
//             if(v[i]+v[j]==target)
//            cout<<i<<","<<j;
//         }
//     }
// }
// int main(){
// int arr[]={2,8,6,4,7,3};
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int>v(n);
// for(int i=0;i<n;i++){
// v[i]=arr[i];
// }
// int target=8;
// twosum(v,target);
// }