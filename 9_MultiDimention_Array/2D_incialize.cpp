# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(4,20));
    // row size 3 . column size 4 and every element 20
    cout<<v[2][2]<<endl;
    // if i print full matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //for row size
    cout<<v.size();
    cout<<endl;
    // for column print
    cout<<v[0].size();

}