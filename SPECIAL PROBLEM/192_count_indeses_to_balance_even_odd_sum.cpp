/*
Given an array arr[], count the number of indices such that deleting the element at that index and shifting all elements after it one position left results in an array where the sum of elements at even indices equals the sum at odd indices.

Examples:

Input: arr[] = [2, 1, 6, 4]
Output: 1
Explaination: After removing arr[1], the resulting array will be [2, 6, 4] the sums of elements at odd index is arr[1] = 6 and the sum of elements at even index is arr[0] + arr[2] = 6.
Input: arr[] = [1, 1, 1]
Output: 3
Explaination: Removing any element makes the sum of odd and even indexed elements equal.
*/
// question bolcha je kono index udia dila , oi index r element bad diya baki element odd sum ar even sum eqial ke na dekhbo
# include<iostream>
# include<vector>
using namespace std;
int equal_part(vector<int>&v){
    int n = v.size();
    // prefix sum . find max odd and even sum
    int total_even=0,total_odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0) total_even+=v[i];
        else total_odd+=v[i];
    }
    int left_even=0,left_odd=0,count=0;

    for(int i=0;i<n;i++){
        // dec selected ith element from total odd or even
        if(i%2==0) total_even-=v[i];
        else total_odd-=v[i];

        // now equal them 
        int new_even = total_odd+left_even; // total_odd because selected index after element position odd tot even  or even to odd 
        int new_odd = total_even+left_odd; // fo these reason change both
        if(new_even==new_odd) count++;

        // selected element odd or even pos add left_odd or even

        if(i%2==0) left_even+=v[i];
        else left_odd+=v[i];

    }
    return count;

}
int main(){
    vector<int>v={2, 1, 6, 4};
    cout<<equal_part(v);
}