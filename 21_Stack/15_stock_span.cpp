# include<iostream>
# include<Stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    // previous greatest element index 
    int ans[n];
    stack<int>st;
    ans[0]=-1;
    st.push(0); // first index 0 
    for(int i=1;i<=n;i++){
        // pop all the index which smaller array index
        while(st.size()>0 && arr[i]>=arr[st.top()]) st.pop();
       //mark the ans array only index 
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();

        //ans[i]= i-ans[i]; span calculate korer janno . jeta ami nicha baniachi .
        // sudhu upore ans[0] = -1 acha oi ta k 1 kore dita hoba 

        st.push(i); // sudhu index push korbo 
    }
    //calculate  span 
    for(int i=0;i<n;i++){
        ans[i]= i-ans[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<< " ";
    }
}