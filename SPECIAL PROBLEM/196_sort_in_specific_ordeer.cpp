/*

*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void order(vector<int>&v){
    int n = v.size();
    if (n==0) return;
    int i=0,j=n-1;
    while(i<j){
        if(v[i]%2!=0) i++;
        else if(v[j]%2==0) j--;
        else{
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    int idx =n;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) {
            idx=i;
            break;
        }
    }
    sort(v.begin(),v.begin()+idx);
    reverse(v.begin(),v.begin()+idx);
    sort(v.begin()+idx,v.end());
}
int main(){
    vector<int>v={1, 2, 3, 5, 4, 7, 10};
    order(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}