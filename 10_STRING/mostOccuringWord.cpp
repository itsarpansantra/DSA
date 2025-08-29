// given a sentence str return the word that is occuring most  number of time that is sentence 
# include<iostream>
# include<algorithm>
# include<string>
# include<vector>
# include<sstream>
using namespace std;
int main(){
string str = "arpan is a math teacher . he is a coder";
stringstream ss(str);
string temp;
vector<string>v;
while(ss>>temp){
    v.push_back(temp);
}
cout<<endl;
sort(v.begin(),v.end());
int maxCount=1;
int count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxCount=max(count,maxCount);
}
 count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
   if(count==maxCount)
   cout<<v[i]<<" "<<maxCount<<endl;
}
}