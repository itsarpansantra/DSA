//Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
# include<iostream>
# include<string>
    using namespace std;
    int main(){
    string str = "abcdcba";
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]==str[j]) cout<<"yes";
        else cout<<"NO";
        i++;
        j--;
    }
}  

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