# include<iostream>
# include<climits>
using namespace std;

// using sliding window
int main(){
    int arr[]={2,-3,4,4,-7,-1,-4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 3;
    int p =-1; // p= previousNegative . -1 mana ata index . value na 
    int ans[n-k+1]; // offcorse last kichu element missing hoba . window hoba na
    for(int i=0;i<k;i++){
       if(arr[i]<0){
        p=i; // calculate the first negative element
        break;
       }
    }
    if(p==-1) ans[0]=1; // jodi array te negative element na thaka 1 print korbo
    else ans[0]=arr[p]; // nahola first negative element
    int i=1;
    int j =k;
    while(j<n){
        if(p>=i) ans[i]=arr[p]; // p jay position thakba say value print korba
        else{
            p=-1;
            for(int x=i;x<=j;x++){ // find the next minimum element 
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]=arr[p];
            else ans[i]=1;
        }
         i++;
        j++;
    }
    for(int i=1;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
}