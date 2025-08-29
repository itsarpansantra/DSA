// give two string s and t determine if they are isomorphic
// i gave two example for understanding isomorphic
/*
 s= title     x= paper
we find different  s and x  
t->p
i->a
t->p . here t assign any other charecter . so we say not isomorphic
l->e
e->r
Every value assign same or different charecter . so we say isomorphic
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<string>
using namespace std;
int main(){
    vector<int>v(150,1000);// 150 size array ar preterk value 1000
    string s= "title";
    string t="paper";
    int n=v.size();
    // we see value s to t 
    if(s.length()!=t.length()) cout<<false;
    for(int i=0;i<s.length();i++){
        int index= (int)s[i]; // first charecter er index value . mana ta r index value
        if(v[index]==1000) v[index]=s[i]-t[i]; // oi array te first check korbo or initial value 1000 acha ke na . jadi thaka 2 to string er first 2 to latter difference basabo
        else if(v[index]!=(s[i]-t[i])) cout<<false; // dharo jadi abar same later asa takhn check korbo duto difference thik acha ke na . na thik thakla false return korbo
    }
     // here we again see t to s
    for(int i=0;i<150;i++){ //again continue loop
        v[i]=1000; // eveery position contain again 1000
    }
        for(int i=0;i<t.length();i++){ // abar ami check korbo t thaka 
        int index= (int)t[i]; // again sob kicu check korbo
        if(v[index]==1000) v[index]=t[i]-s[i];
        else if(v[index]!=(t[i]-s[i])) cout<<false;
    }
    
  cout<<true;
}