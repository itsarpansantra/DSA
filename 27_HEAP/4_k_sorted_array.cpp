# include<iostream>
# include<queue>
# include<vector>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,24,105,118};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vector<int>ans; // sort kore push korbo
    int idx =0; // use index
    int k = 3;
    priority_queue<int, vector<int> , greater<int> >pq; // minheap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            //ans.push_back(arr[i]);
            arr[idx++]=pq.top();
            pq.pop();
            
        }
    }
    while(pq.size()>0){
        //ans.push_back(arr[i]);
        arr[idx++]=pq.top();
        pq.pop();
    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}