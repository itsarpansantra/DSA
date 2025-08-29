// basically akta array thakaba  . akta ans array banabo dia window r modha first negative element push korbo
// jodi window r modha kono negative element na thaka to ans vector 0 push korbo
# include<iostream>
# include<vector>
# include<queue>
using namespace std;
int main() {
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    vector<int>v;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i); // negative element queue te push korlam
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i) q.pop(); // queue te ja index acha se jodi i r thaka baro hoy pop kore debo
        if(q.size()==0 ||q.front()>=i+k) v.push_back(0); // mana amar window te kono negative na thakala 0 push hoba
        // q.size()==0 mana queue te kono element nay . takhn oi condition hoba 
        else v.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}