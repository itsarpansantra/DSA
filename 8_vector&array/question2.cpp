// sort 0 or 1 and 2
# include<iostream>
# include<vector>
using namespace std;

void sort(vector<int> &v){
    int n= v.size(); 
    int low=0, high = n-1 , mid=0;
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
void display(vector<int> &a){ 
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
        v.push_back(p); 
    }
    display(v);
    sort(v);
    display(v);
    cout<<endl;
}
