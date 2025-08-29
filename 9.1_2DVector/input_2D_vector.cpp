# include<iostream>
# include<vector>
using namespace std;
int main(){
    int m;
        cout<<"Enter no of Rows: ";
        cin>>m;
        vector< vector<int> >v; // this is 2D vector 
        for(int i=1;i<=m;i++){
            vector<int>a(i); // nutun akta vector banalam j first 1 ta column tarpor 2 to arakam barbe
            v.push_back(a); // baro vector puro vector ta push kore dilam 
        }
} // it will generate pascal triangle