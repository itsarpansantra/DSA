// input a string and count all vowel
# include<iostream>
# include<string>
using namespace std;
int main(){
    string str = "arpan santra";
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'  ){
            count++;           
        }
        i++;
    }
    cout<<count;
}


// using foor loop
// # include<iostream>
// # include<algorithm>
// # include<string>
// using namespace std;
// int main(){
//  string str = "arpan santra";
//  int count =0;
//  for(int i=0;i<str.size();i++){
// if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'  ){
//     count++;
//   }
//  }
//    cout<<count;
// }  