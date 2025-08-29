// given a string consisting a lower case english alphabates . print the carecter that occuring most number of times
# include<iostream>
# include<algorithm>
# include<string>
# include<vector>
using namespace std;
int main(){
    // string s;
    // getline(cin,s); 
    // sort(s.begin(),s.end());
    // int max=0;
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count =1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(max<count) max=count;
    // }
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count =1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count==max) {
    //         cout<<ch<<" "<<max<<endl;
    //     }
    // }



    // ANOTHER PROCESSES
    string s ="arpan";
    vector<int>v(26,0); // 26 size r akta vector banalam jar initial value 0
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int  ascci =(int)ch; // ascci value of first number
        v[ascci-97]++; // oi a te first 0 oi ta bare 1 hoye jaba 
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max=v[i]; // check which element is greater . this is my max
    }
    for(int i=0;i<26;i++){
        if(v[i]==max){ // jay alphabate ta max tar kotha bolcha
            int ascii= i+97; // max element ter ascii value bar korbo
            char ch= (char)ascii; // typecast korbo charecter 
            cout<<ch<<" "<<max<<endl; // charecter ar katobar asacha ta print korbo
        }
    }

}