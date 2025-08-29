// Input: nums = [2,4,3,7,10,6]
// Output: 4
// Explanation:
// The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
// mana hohha ai array te kato gulo prime factor acha
# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
void fillseve(vector<bool>&sieve){
    int n = sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=i){
            sieve[j]=0;
        }
    }
}
int distinct_prime(vector<int>&v){
    int n = v.size();
    int mx = -1;
    for(int i=0;i<v.size();i++){
        mx = max(mx,v[i]); // find max element in array : 10 

    }
    vector<bool>sieve(mx+1,1); // 11 ta size er akta array jar pratek element 1
    if(n>0) sieve[0]=0;
    if(n>1) sieve[1]=0;
    fillseve(sieve); // sieve ja vector ta acha dekhbo or kon kon element prime
    vector<int>prime; // alada akta prime vector . ata sudhu 2 to max element prime number thakba
    for(int i=2;i<=mx;i++){
        if(sieve[i]==1) prime.push_back(i);
    }

    vector<bool>taken(prime.size(),0);// ai khana 0 thaka 1 korbo jodi number prime hoy 
    for(int i=0;i<v.size();i++){
        int ele = v[i]; // array element 
        for(int j=0;j<prime.size();j++){ 
            if(prime[j]>ele) break; // let element =2 ar prime number 5 . so 5>2 hola loop cholba nahoa break korba
            if(ele%prime[j]==0) taken[j]=1;
        }
    }
    int count =0;
    for(int i=0;i<taken.size();i++){
        if(taken[i]==1) count++;
    }
    return count;
}
int main(){
    int arr[]={2,4,5,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<distinct_prime(v);
}