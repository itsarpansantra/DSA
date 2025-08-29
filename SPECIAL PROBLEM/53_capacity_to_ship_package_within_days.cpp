# include<iostream>
# include<vector>
# include<climits>
using namespace std;
bool check(vector<int>&v,int days , int mid){
    int n=v.size();
    int m=mid ; // akhana abar mid nia nabo 
    int count=1; // akbar to jabay 
    for(int i=0;i<n;i++){
        if(m>=v[i]){ // dhekbo amar ja mid acha oi ta array firs thaka choto ke na
            m-=v[i]; // to mid thaka minus korbo
        }
        else{
            count++; // jodi mid choto hoye jay  to day 1 complete . i go nest day
            m=mid; // again mid k thik korbo
            m-=v[i]; // abar - korbo
        }
    }
    if(count>days) return false; // ai khana check korbo jodi din basi hoye jay tahola loop break korbo
    else return true; // jodi din ar count ak hoye jay to ami sob element ai khan thaka oi khana patha te parbo
}
int weight(vector<int>&v,int days){
    int n=v.size();
    int max=INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(max<v[i]) max=v[i]; // i give mas element in array
        sum+=v[i]; // and i get also sum of array
    }
    int low=max; // because ami toakbar jabo to akbar gala max element k nebo
    int high=sum; // ar janno ak dinka kaj ses korla sob gulo k nia chola jabo
    int min_capacity=sum; // this also change
    while(low<=high){
        int mid=(low+high)/2; // binary search
        if(check(v,days,mid)){
            min_capacity=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return min_capacity;

}
int main(){
    int arr[]={3,2,2,4,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int day =3;
   cout<< weight(v,day);
}