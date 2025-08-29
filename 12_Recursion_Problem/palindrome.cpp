// # include<iostream>
// # include<string>
// using namespace std;
// bool palindrome(string str){
//     int i=0; int j=str.length()-1;
//     while(i<j){
//         if(str[i]!=str[j])return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main(){
//     string str ="arpan";
//    cout<< palindrome(str);
// }


// using recursion
# include<iostream>
# include<string>
using namespace std;
bool palindrome(string str,int i , int j){
    if(i>j)return true;
          if(str[i]!=str[j])return false;
          else return palindrome(str,i+1,j-1);
  
}
int main(){
    string str ="mom";
   cout<< palindrome(str,0,str.length()-1);
}
