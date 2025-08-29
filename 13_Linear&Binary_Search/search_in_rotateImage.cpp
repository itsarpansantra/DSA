# include<iostream>
# include<vector>
using namespace std;
int search(vector<int>&v,int target){
    int n= v.size();
    int low=0;
    int high=n-1;
    int pivot = -1; // basically find smallest number 
    //if my array is shortd i does't find pivot.
   
    if(n==2){ //only for decresing means rotated r janno . ar length 2 hola
        if(target==v[0]) return 0; 
        else if(target==v[1] )return 1;
        else return -1;
    }
     //find pivot index 
    while(low<=high){
      int  mid= (low+high)/2;
      if(mid==0) low=mid+1; // ami jadi mid first pay jay tar janno
      else if(mid==n-1) high=mid-1; // ba amar mid jodi last element hoy tar janno
      else if(v[mid]<v[mid-1] && v[mid]<v[mid+1]){ // find smolest index
        pivot = mid;
        break;
      }
      else if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){ // find high index
        pivot = mid+1;
        break;
      }
      else if (v[mid]>v[high]) low=mid+1;
      else high=mid-1;
    }
    if(pivot==-1){ // pivot jodi na poa jay tahola array dec.order sorted
        // normal binary search 
        low=0;
        high=n-1;
        while(low<=high){
           int  mid = (low+high)/2;
           if(v[mid]==target) return mid;
           else if(v[mid]<target) low=mid+1;
           else high=mid-1;
        }
        return -1;
    }
    // find target number 
    if(target>=v[0] && target<=v[pivot-1]){ // amra target jodi pivot r aga thaka .tar janno alada  dekhbo
        // only find target on kth element rotate
        low=0;
        high=pivot-1;
        while(low<=high){
           int  mid = (low+high)/2;
           if(v[mid]==target) return mid;
           else if(v[mid]<target) low=mid+1;
           else high=mid-1;
        }
    }
    else{ // pivot r por baki je gulo thakba sekhana check korbo
        low=pivot;
        high=n-1;
        while(low<=high){
           int  mid = (low+high)/2;
           if(v[mid]==target) return mid;
           else if(v[mid]<target) low=mid+1;
           else high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={18,20,5,6,8,15,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int target = 8;
    cout<<search(v,target);
}