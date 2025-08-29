# include<iostream>
# include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1 , vector<int>&arr2){
    int n=arr1.size();
    int m= arr2.size();
    vector<int>result(m+n);
    int i=0; // for first array
    int j=0; // for second array
    int k=0; // for resultent array
    while(i<=n-1 && j<=m-1){ 
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
            k++;
        }
        else{
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
    //remainig part
    if(i==n){ // i fool hoye gala 
        while(j<=m-1){ // arr2 te ja element acha sagulo vorti kore dao
            result[k]=arr2[j]; 
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            result[k]=arr1[i];
            i++;
            k++;
        }
    }
    return result;
}
void display(vector<int>&v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr1;
    arr1.push_back(2);
    arr1.push_back(6);
    arr1.push_back(8);
    arr1.push_back(11);
    arr1.push_back(13);

   display(arr1);
    cout<<"  ";
    vector<int>arr2;
    arr2.push_back(1);
    arr2.push_back(3);
    arr2.push_back(7);
    arr2.push_back(9);
    arr2.push_back(15);
    arr2.push_back(18);

    display(arr2);

    cout<<endl;

    vector<int>v= merge(arr1,arr2);

    display(v);

}
   