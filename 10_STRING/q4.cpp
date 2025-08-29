// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main(){
    string str="abcdefgh";
    if(str.size()%2 != 0) cout<<"Invalid input."<<endl;
  else{
  reverse(str.begin() + str.size() / 2, str.end());
  cout << str;
  }
   }
