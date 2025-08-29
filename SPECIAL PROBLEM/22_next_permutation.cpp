# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
// void reverse(vector<int>&v , int i ,int j){
//     while(i<j){ // reverse the element
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return ;
// }
void nextPermutation(vector<int>&v){
// first part
   
   // find pivot element . pivot means amon akta numbr khujte hoba j oi number sthir thakba baki number rotate hoba
    int n= v.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){ // last theka check hoba
        if(v[i]<v[i+1]){
            index=i;
            break;
        }

    }
    if(index==-1){ // jadi sab element decresing order thaka takhn ata hoba . ex = 4321 
        reverse(v.begin(),v.end());
        return ;
    } 

    // second part 

    // reverse(v,index+1 , n-1);
    reverse(v.begin()+index+1,v.end());

    int j=-1;
    for(int i=index+1;i<n;i++){
        if(v[i]>v[index]){
            j=i;
            break;
        }

    }
    int temp= v[index];
    v[index]=v[j];
    v[j]=temp;
    return ;

}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    vector<int>v;
    int x;
    cout<<"Enter array size: ";
    cin>>x;
    cout<<"enter array element: ";
    for(int i=0;i<x;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    nextPermutation(v);
    display(v);
}