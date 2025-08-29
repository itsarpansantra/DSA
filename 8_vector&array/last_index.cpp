# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    int x=7; // amni akta value dabo . abar sata dekhbo j ar last index kothy acha
    int index=-1; // amra amni akta isialize korbo
    // akta loop lagabo first thaka last abdi
    // 
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) index=i;
    // }
    // abar amra last thaka loop lagabo
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) index=i;
        break;
    }
    cout<<index;
}