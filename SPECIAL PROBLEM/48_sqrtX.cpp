/*Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
*/
# include<iostream>
using namespace std;
int MySqurt(int low , int high){
    int x =high;
     while(low<=high){
        int mid = low+(high-low)/2;
        long long m=(long long )mid;
        long long y=(long long )x;
        if(m*m==y) return mid;          
        else if(m*m>y)high = mid-1;
        else  low = mid+1;
    }
    return high;
}
int main(){
    int x;
    cout<<"Enter X: ";
    cin>>x;
    cout<<MySqurt(0,x);
}