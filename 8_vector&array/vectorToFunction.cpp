# include<iostream>
# include<vector>
using namespace std;
void change(vector<int> &a){
    a[1]=78;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}