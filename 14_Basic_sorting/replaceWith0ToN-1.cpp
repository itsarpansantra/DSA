// bacically amaka akta array diba sekhana 1 to n-1 . ami travel korbo puro array te
// jeta choto element hoba seta te 1 tarporer ta 2 ai rkomo barba 
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int main(){
    int arr []={19,12,23,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0); // 0 means not visited
    int x =0;
    for(int i=0;i<n;i++){
       int min=INT_MAX;
       int mindex=-1;
       for(int j=0;j<n;j++){
        if(v[j]==1) continue;  // jodi pratham thaka 1 thaka tahola continue
        else{
            if(min>arr[j]){ // array r modha min element bar korbo
                min = arr[j];
                mindex=j; // min element index tao bar korbo
            }
        }
       }
       arr[mindex]=x; // minmum index a x r value put korbo
       v[mindex]=1; // visited
       x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}