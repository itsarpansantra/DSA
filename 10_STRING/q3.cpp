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