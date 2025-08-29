# include<iostream>
# include<set>
# include<map>
using namespace std;
int main(){
    set<int>s;
    // order list always asending order
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(9);
    for(int ele:s){
        cout<<ele<<" ";
    }
}