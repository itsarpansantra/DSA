# include<iostream>
# include<algorithm>
# include<string>
# include<vector>
# include<sstream>
using namespace std;

//isomorphic

int main(){
string str = "abbcdeffghh";
int n = str.size();
int count=0;
for(int i=0;i<n;i++){
    if(n==1) break;
    else if(n==2 && str[0]!=str[1]) {
        count=1; 
        break;
    }
    if(i==0) {
        if(str[i]!=str[i+1]) count++;
    }
    if(i==n-1){
        if(str[i]!=str[i-1]) count++;
    }
    if(str[i]!=str[i-1] && str[i]!=str[i+1]) count++;
}
cout<<count;
}