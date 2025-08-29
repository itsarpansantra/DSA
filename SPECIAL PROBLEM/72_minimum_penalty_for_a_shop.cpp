/*
Example 1:

Input: customers = "YYNY"
Output: 2
Explanation: 
- Closing the shop at the 0th hour incurs in 1+1+0+1 = 3 penalty.
- Closing the shop at the 1st hour incurs in 0+1+0+1 = 2 penalty.
- Closing the shop at the 2nd hour incurs in 0+0+0+1 = 1 penalty.
- Closing the shop at the 3rd hour incurs in 0+0+1+1 = 2 penalty.
- Closing the shop at the 4th hour incurs in 0+0+1+0 = 1 penalty.
Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.

*/
# include<iostream>
# include<vector>
# include<string>
using namespace std;
int product(string str){
    int n = str.size();
    int prefix[n+1]; // string r thaka aktu baro
    int sufix[n+1];
    prefix[0]=0; // first dhora nilam dokan bandha nay taii 0

    for(int i=0;i<n;i++){ // ata string r upor loop cholcha
        int count =0; 
        if(str[i]=='n') count++; // check no hola +1
        prefix[i+1]=prefix[i]+count; // prefix element add kore day
    }

    sufix[n]=0; // ata last thaka insialize hochha 
    for(int i=n-1;i>=0;i--){ //same string upor 
        int count=0;
        if(str[i]=='y') count++; // check yes . hola 1 barba
        sufix[i]=sufix[i+1]+count;// suffix count hoba
    }

    int minPenalty = n; // ata akta number dhort hato . to string size nia nichi
    for(int i=0;i<=n;i++){ // ata prefix sum er upor loop 
        prefix[i]+=sufix[i]; // ami total panalty ta calculat korchi . ar seta prefixsum r array ta rhakchi
        int penalty = prefix[i]; // 
        minPenalty = min(penalty,minPenalty); // minimum panalty calculate korchi

    }
    for(int i=0;i<=n;i++){ // find the index . which panalty less
        int penalty = prefix[i];
        if(penalty==minPenalty) return i;
    }

}

int main(){
    string str="yyny";
    cout<< product(str);
}