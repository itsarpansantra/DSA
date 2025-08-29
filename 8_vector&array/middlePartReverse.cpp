# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(int i ,int j ,vector<int>&a){
    while(i<=j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
    return ;
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(10);
    v.push_back(5);
    v.push_back(9);
    display(v);
    reverse(1,3,v);
    display(v);
}