//Example 1:

// Input: nums = [[1,2,3],[5,6,7],[9,10,11]]
// Output: 11
// Explanation: The numbers 1, 3, 6, 9, and 11 are the only numbers present on at least one of the diagonals. Since 11 is the largest prime, we return 11.

# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int diagonal(vector<vector<int>>&v){
    int n= v.size(); //row
    int max_diagonal = 0; // find max prime 
    for(int i=0;i<n;i++){
        if(isprime(v[i][i])){ // for lower diagonal
            max_diagonal = max(max_diagonal,v[i][i]);
        }
        if(isprime(v[i][n-i-1])){ // for upper diagonal
            max_diagonal = max(max_diagonal,v[i][n-i-1]);
        }
    }
  return max_diagonal;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    vector<int>v3;
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);

    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<diagonal(v);
}