/*
Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

 

Example 1:

Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.
Example 2:

Input: nums = [1,2,3], k = 0
Output: 0
*/
// step1: k jodi 2 r thaka choto hoy retrn 0
// step2: question bolcha k r thaka jato gulo sub array hoba return korta 
// step3: laster while r karon i roa jachha taii oi subarray gula count hochha na .
# include<iostream>
# include<vector>
using namespace std;
int subarry_product(vector<int>&v,int k){
    int n = v.size();
    int i=0,j=0,count=0;
    int product=1;
    if(k<=1) return 0;
    while(j<n){
        product*=v[j]; // product of array not all only i to j in less than k  
        while(product>=k){ // product basi hoye gala 
            count+=(j-i); // i to j r modha jato gula element acha 
            product/=v[i]; // porer round next i++ hpye jacha taii oi element ta k bar korta hoba
            i++;
        }
        j++;
    }
    while(i<n){ // ata korer karon j to loop thaka baria jaba ar element roye jaba taii sob subarray add kort hoba  
        count+=(j-i);
        product/=v[i];
        i++;
    }
    return count;
}
int main(){
    vector<int>v={10,5,2,6};
    int k = 100;
    cout<<subarry_product(v,k);
}