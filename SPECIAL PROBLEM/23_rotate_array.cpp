// problem statement: Rotate the given array by k steps .  where k is non negative. last k integer rotate
// k r value ja thakba seta pachan dik thaka reverse hoba
// # include<iostream>
// # include<vector>
// using namespace std;
// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i , int j, vector<int> &v){
//     while(i<=j){
//     int temp =v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//     }
//     return ;
// }
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"Enter array size: "; // declare array size
//     cin>>n;
//     cout<<"Enter array elements :";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q); //input number
//     }
//     display(v);
//     int k=2; // last thaka kato gulo element rotate korbo
//     int x=v.size(); // array size
//     if(k>x) k =k%x;  // jadi arry size r thaka k baro hoye jay takhn ai condition ta korbo
//     reversePart(0,x-k-1,v); // function call 0 to array-k-1 parjanto , v= vector
//     reversePart(x-k,x-1,v); // ata tar pare j element gulo bacha jaba tader k rotatate korba
//     reversePart(0,x-1,v); // total array rotate hoba
//     display(v);
// }




 // if i dont use function*

 # include<iostream>
 # include<vector>
 # include<algorithm>
 using namespace std;
 void display(vector<int>&a){
     for(int i=0;i<a.size();i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }
 int main(){
     vector<int>v;
     int n;
     cout<<"Enter array size: "; // declare array size
     cin>>n;
     cout<<"Enter array elements :";
     for(int i=0;i<n;i++){
         int q;
         cin>>q;
         v.push_back(q); //input number
     }
     display(v);
     int k=2; // last thaka kato gulo element rotate korbo
     int x=v.size(); // array size
     if(k>x) k =k%x;
     reverse(v.begin(),v.end()-k);
     reverse(v.end()-k , v.end());
     reverse(v.begin(),v.end());
     display(v);
 }