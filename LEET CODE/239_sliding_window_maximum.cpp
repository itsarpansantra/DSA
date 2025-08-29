/*
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
*/

// using stack 

# include<iostream>
# include<vector>
# include<stack>
# include<climits>
using namespace std;
vector<int>window(vector<int>&v,int k){
    int n = v.size();
    vector<int>ngi(n); // next greater index  // oi vector every element k n kore dilam 
    stack<int>st;
    ngi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && v[i]>=v[st.top()]) st.pop();
        
        if(st.size()==0) ngi[i] =n;
        else ngi[i]=st.top();

        st.push(i);
    }

    vector<int>ans; // maximum window size 
     // max window
     int j =0; // globally rhaklam jata bar bar  same element check korta na hoy 
    for(int i=0;i<n-k+1;i++){ // outer loop
        if(i>j) j=i; // j i r pachana roye gala 
        int mx = v[j]; // initialy i assumed this my max ele in window 
        while(j<i+k){ // window r vatora max element 
            mx = v[j];  
            if(ngi[j]>=i+k) break;  // ata korar karon max element jodi window r baira hoy 
            j = ngi[j]; // j khujba max elemeent k 
        }
        ans.push_back(mx);
    }
    return ans;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3; // window size;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v);
    vector<int>p = window(v,k);
    display(p);
}

// using queue

# include<iostream>
# include<vector>
# include<queue>
using namespace std;
vector<int>maximum(vector<int>&v,int k){
    if(k==1) return v; // window size 1 mana oi tai max element 
    deque<int>dq; // decresing order index 
    vector<int>ans; // i shoud be minimum k-1
    int n = v.size();
    for(int i=0;i<n;i++){
        while(dq.size()>0 && v[i]>v[dq.back()]) dq.pop_back();
        dq.push_back(i); // only push index
        int j = i-k+1; // j = start of the window  . i end of the window
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1) ans.push_back(v[dq.front()]);
    }
    return ans;
}
int main() {
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }

    vector<int>p = maximum(v,k);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}

// brute forse algo

// int main(){
//     int arr[]={1,3,-1,-3,5,3,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k =3; // window size;
//     vector<int>ans;
//     for(int i=0;i<n-k+1;i++){
//         int mx = INT_MIN;
//         for(int j = i;j<i+k;j++){
//             mx = max(mx,arr[j]);
//         }
//         ans.push_back(mx);
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }
