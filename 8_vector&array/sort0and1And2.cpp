// sort 0 or 1 and 2
# include<iostream>
# include<vector>
using namespace std;
void sort(vector<int> &v){
    int noOfZero=0; // we insialize first 
    int noOfOne =0;
    int noOfTwo =0;
    // two pass algorithm
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noOfZero++; // no of zero heat kore gala noof zero count korta thakbo
        else if(v[i]==1) noOfOne++;
        else noOfTwo++;
    }
     for(int i=0;i<v.size();i++){
        if(i<noOfZero) v[i]=0;// typecast kore dabo . jadi count noof zero thaka i choto hoy tahola 0 print nahola 1 print
        else if(i<(noOfZero+noOfOne)) v[i]=1;
        else v[i]=2;
    }
    cout<<endl;
    return ;
}
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){ // function display
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
        v.push_back(p);//input
    }
    display(v);
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; // sort function display
    }
    cout<<endl;
}