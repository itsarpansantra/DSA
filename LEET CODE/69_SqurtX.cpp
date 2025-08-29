//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
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