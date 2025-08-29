# include<iostream>
# include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>st;
    st.insert(2);
    st.insert(3);
    st.insert(6);
    st.insert(5);
    st.insert(9);

    // for each loop
    for(int ele:st){
        cout<<ele<<" ";
    }

    // searching 
    int target = 6;
    if(st.find(target)!=st.end()){ // target exists
        cout<<"exists";
    }
    else{
        cout<<"Not Exists";
    }
}