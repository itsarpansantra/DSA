// print subset of a string with unique charecters
// input "abc"
// output abc ab ac a bc b c ""

# include<iostream>
# include<string>
using namespace std;
  void subset(string str , string s , int index){
    char ch = str[index];
     if(str.length()==index){
        cout<<s<<endl;
        return ;
      }
    subset(str,s+ch,index+1);
    subset(str,s,index+1);
  }
int main(){
  string str ="abc";
  string s ="";
  subset(str,s,0);
}
  


  // Another processes

  // # include<iostream>
  // # include<string>
  // using namespace std;
  // void subset(string str , string s ){
  //     char ch = str[0];
  //     if(str==""){
  //         cout<<s<<" ";
  //         return ;
  //     }
  //    subset(str.substr(1),s+ch);
  //    subset(str.substr(1),s);
  // }
  // int main(){
  //  string str ="abc";
  //  string s ="";
  //  subset(str,s);
  // }