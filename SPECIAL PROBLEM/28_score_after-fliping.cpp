/*
0 0 1 1      
1 0 1 0  ->  ai rokom akta matrix thakba tarpor prek ta row jog korbo .   
1 1 0 0       ami puro matrix travel korta parbo 0 k 1 ar 1 k 0 banata parbo
first matrix ar change karer por matrix r madha compare korbo ke vaba -> pratek er row jog korta thakbo
*/
# include<iostream>
# include<vector>
using namespace std;
int matrixScore(vector<vector<int>> & v) {
    int m=v.size();// row
    int n=v[0].size();// column
    // making every row first element 1
    for(int i=0;i<m;i++){
        if(v[i][0]==0){
            for(int j=0;j<n;j++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    // Fliping columns
    for(int j=0;j<n;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<m;i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<m;i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
        sum+=v[i][j]*x;
        x*=2;
       }
    }
    return sum;
}

int main(){
vector<int>v1;
v1.push_back(0);
v1.push_back(0);
v1.push_back(1);
v1.push_back(1);
vector<int>v2;
v2.push_back(1);
v2.push_back(0);
v2.push_back(1);
v2.push_back(0);
vector<int>v3;
v3.push_back(1);
v3.push_back(1);
v3.push_back(0);
v3.push_back(0);
vector< vector<int> > v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
cout<<matrixScore(v);
}