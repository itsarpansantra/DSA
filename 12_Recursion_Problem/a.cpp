# include<iostream>
# include<string>
# include<vector>
# include<algorithm>
# include<cmath>
using namespace std;
// substring
// void sub(string str , string s,vector<string>&v,bool flag){
//     char ch = str[0];
//     if(str==""){
//     v.push_back(s);
//     return ;
//     }
//     if(str.length()==1){
//         if (flag==true) sub(str.substr(1),s+ch,v,true);
//         sub(str.substr(1),s,v,true);
//         return ;
//     }
//     char dh = str[1];

//     if(ch==dh){
//         if (flag==true) sub(str.substr(1),s+ch,v,true);
//         sub(str.substr(1),s,v,false);
//     }
//     else{
//         if (flag==true) sub(str.substr(1),s+ch,v,true);
//         sub(str.substr(1),s,v,true);
//     }

// }
// bool check(int n){
//     if(n==0) return false;
//     if(n==1) return true;
//     int count =0;
//     while(n>1){
//         if(n%3==0 )count++;
//         n/=3;
//     } 
//    //int count=3;
//     int x =pow(count,3);
//     if(x==n) return true;
//     else return false;
// }
// bool check(int n) {
//     if(n <= 0) return false;
//     while(n % 3 == 0) {
//         n /= 3;
//     }
//     return n == 1;
// }
// vector<int>check(vector<int>&p){
//     int n = p.size();
//     vector<int>ans;
//     sort(p.begin(),p.end());
//     for(int i=0;i<n-1;i++){
//         if(p[i]==p[i+1]) ans.push_back(p[i]);
//     }
//     return ans;
// }
// int main(){
//     // // string str = "arpan santra";
//     // // string s=" ";
//     // // remove(str,s,0);
//     // string str = "aac";
//     // string s="";
//     // vector<string>v;
//     // sub(str,s,v,true);
//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<endl;
//     // }

//     // int n ;
//     // cout<<"enter n: ";
//     // cin>>n;
//     int arr[]={45 ,12 ,37, 32, 1 ,1 ,14 ,7, 7, 5 ,22, 8, 42, 22, 40, 42, 38, 21, 34 ,27 ,18 ,26, 45 ,37, 41, 39, 4 ,43 ,40 ,31 ,29 ,44, 3,9, 44 ,23 ,10 ,25 ,15 ,41 ,3 ,10 ,21 ,23, 8 ,38};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     vector<int>p(n);
//     for(int i=0;i<n;i++){
//         p[i]=arr[i];
//     }
//     for(int i=0;i<p.size();i++){
//         cout<<p[i]<<" ";
//     }
//     cout<<endl;
//     vector<int>v = check(p);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//}

// # include<iostream>
// # include<cmath>
// using namespace std;
bool check(int n){
    int real_n = n;
    int count =0;
    while(n>1){
        if(n%4==0) count++;
        n/=4;
    }
    int x = pow(4,count);
    if(real_n==x) return true;
    else return false;
}
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    cout<<check(n);
}