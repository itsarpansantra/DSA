# include<iostream>
# include<climits>
# include<vector>
using namespace std;
bool check(vector<int>&times , int totaltrips , int mid){
    int trips =0; // first 0 thakba . ami journy start kore ne 
    int n = times.size();
    // 1 2 3 . if mid =2 . so first 2/1 = 2 , second 2/2 =1 , third 2/3 = 0 . total 2+1+0=3
    for(int i=0;i<n;i++){
       trips+=mid/times[i]; // 
    }
    if(trips<totaltrips) return false;
    else return true;
}
int minimumTime(vector<int>&times , int trips){
    int n = times.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<times[i]) max=times[i];
    } // find max element 
    int low=1; // 1 hour akta jayga thaka ar ekta jayga jaba 
    int high =max*trips; // ar thaka baro kichu hoba na 
    int ans =-1; // minimum kato time ami Total trip ta puro korbo 
    while(low<=high){ // normal binary search
        int mid = (low+high)/2;
       if( check(times,trips,mid)){
            ans = mid;
            high = mid-1;
        }
        else low=mid+1;
    }

}
int main(){
    int arr[]={1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int totaltrips = 5;
    cout<<minimumTime(v,totaltrips);
}