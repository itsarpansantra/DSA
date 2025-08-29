# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
# include<cmath>
# include<string>
# include<sstream>
using namespace std;
bool valid(string str,int i , int j){
   if(i>j) return true;
   if(str[i]!=str[j]) return false;
   return valid(str,i+1,j-1);
}
int main(){
   string str= "abba";
   cout<<valid(str,0,str.size()-1);
}
