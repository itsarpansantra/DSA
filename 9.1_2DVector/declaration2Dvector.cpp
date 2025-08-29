# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3 , vector<int>(4,22));
    // it means 3 row and 4 column and each value 22
    for(int i= 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    //22 22 22 
    //22 22 22
    //22 22 22
    

    // column size
    cout<<endl;
    cout<<v[0].size();
}