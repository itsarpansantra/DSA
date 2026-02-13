/*
Given a positive number n and a number d. Find the count of positive numbers smaller or equal to n such that the difference between the number and sum of its digits is greater than or equal to given specific value d.

Examples:

Input: n = 13, d = 2
Output: 4
Explanation:
There are 4 numbers satisfying the
Conditions. These are 10, 11, 12 and 13.
Input: n = 14, d = 3
Output: 5
Explanation:
There are 5 numbers satisfying the
Conditions. These are 10, 11, 12, 13 and 14.
*/
//find lowest number which less than n and this is lowst number 
// solve count digit . x - sumOfDigit(x)
# include<iostream>
# include<vector>
using namespace std;
int count_digit(int n){
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}
int difference(int n ,int d){
    int low = 1;
    int high = n;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid-count_digit(mid)>=d){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    if(ans==-1) return 0;
    else return (n-ans+1);
}
int main(){
    int n = 13;
    int d = 2;
    cout<<difference(n,d);
}