// // find Amstrong number
// //Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
// // let 153 = 1^3 +5^3 + 3^3 = 1+125+27 =153
#include <iostream>
#include<cmath>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number for n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int sum =0;
//         int number =i;
//         while(number>0){
//             int digit = number%10;
//             sum+=digit*digit*digit; // only for 3 digit number 
//             number/=10;
//         }
//         if(i==sum) cout<<i<<" ";
//     }
// }

// another 
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     int i = n;
//     int sum =0;
//     while(n>0){
//         int p = n%10;
//         sum+=p*p*p;
//         n/=10;
//     }
//    if(i==sum) cout<<"amstrong number";
//    else cout<<"not amstrong";
// }

// all number except 153
int main(){
int n ;
    cout<<"Enter n: ";
    cin>>n;
    int originalNum , remainder;
    int count =0;
    int result =0;
    originalNum=n;
    int tempNum =n;
    while(tempNum!=0){
        tempNum /=10;
        count++; 
    }
    tempNum = n;
    while(tempNum!=0){
        remainder = tempNum%10;
        result += (float)pow(remainder,count);
        tempNum /=10;
         
    } // only not satisfy 153 
    if(result==originalNum) cout<<originalNum<<" is Armstrong number ";
    else cout<<originalNum<<" is not Armstrong number ";
}