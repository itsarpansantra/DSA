/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
*/
# include<iostream>
# include<stack>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int nsi[n]; //nsi -> next smaller index
    stack<int>st;
    nsi[n-1] = n; // last number index always n
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the index which are big present in stack
        while(st.size()>0 && arr[st.top()]>=arr[i]){ // first condition stack underflow jata na hoy 
            st.pop();
        }
        // mark the ans next smallest element array 

        if(st.size()==0) nsi[i]=n;
        else nsi[i] =st.top();

        // push in stack
        st.push(i);
    }

    // aibar previous smallest index bar korbo

    int psi[n]; //nsi -> next smaller index
    stack<int>gt;
    psi[0] = -1; // last number infex always n
    gt.push(0);
    for(int i=1;i<=n;i++){
        // pop all the index which are big present in stack
        while(gt.size()>0 && arr[gt.top()]>=arr[i]){ // first condition stack underflow jata na hoy 
            gt.pop();
        }
        // mark the ans next smallest element array 

        if(gt.size()==0) psi[i]=-1;
        else psi[i] =gt.top();

        // push in stack
        gt.push(i);
    }

    int maxArea =0;// calculate max area of rectangle
    for(int i=0;i<n;i++){
        int height = arr[i];
        int breadth = nsi[i]-psi[i]-1;
        int area = height*breadth;
         maxArea= max(maxArea,area);
    }
    cout<<maxArea;  
}
