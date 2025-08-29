# include<iostream>
# include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>mp;
    pair<int,string>p1;
    p1.first = 26;
    p1.second = "arpan";

    pair<int,string>p2;
    p2.first = 36;
    p2.second = "souma";

    pair<int,string>p3;
    p3.first = 76;
    p3.second = "sanju";

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // another method 

    unordered_map<string,int>m;

    m["arpan"] = 76; // m ar roll 76
    m["souma"] = 46;
    m["sanju"] = 36;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }


    // if i delete something
    m.erase("souma");
    for(auto p:m){ 
        cout<<p.first<<" "<<p.second<<endl;
    }
}