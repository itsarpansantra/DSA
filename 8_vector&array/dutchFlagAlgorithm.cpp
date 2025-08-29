// sort 0 or 1 and 2
# include<iostream>
# include<vector>
using namespace std;
// one pass 
void sort(vector<int> &v){
    int n= v.size(); // array size 
    int low=0, high = n-1 , mid=0; // i hachha array first element ar j hochha last elemant
    while(mid<=high){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v [mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else mid++;
    }
    cout<<endl;
    return ;
}
void display(vector<int> &a){ // display value
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Ente array size: ";
    cin>>n;
    cout<<"Enter aray Elements: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p); // input
    }
    display(v);
    sort(v);
    display(v);
    cout<<endl;
}
