//Input a string of length n and count all the consonants in the given string.
 //Input : "pwians"
// Output : 4
# include<iostream>
# include<string>
using namespace std;
int main(){
 string str = "pwians";
 int count =0;
 for(int i=0;i<str.size();i++){
if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'  ){
    count++;
  }
 }
   cout<<count;
}  