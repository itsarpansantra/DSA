# include<iostream>
# include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>&v , int target){
    int row = v.size();
    int column = v[0].size();
    int i=0;
    int j= column-1;
    while(i<row && j>=0){
        if(v[i][j]==target) return true;
        else if(v[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
    vector<int>v1; 
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(11);
    v1.push_back(15);

    vector<int>v2;  
    v2.push_back(2); 
    v2.push_back(5); 
    v2.push_back(8);
    v2.push_back(12);
    v2.push_back(19);

    vector<int>v3; // {9,7,8,1}
    v3.push_back(3); 
    v3.push_back(6); 
    v3.push_back(9); 
    v3.push_back(16);
    v3.push_back(22);

    vector<int>v4; // {9,7,8,1}
    v4.push_back(10); 
    v4.push_back(13); 
    v4.push_back(14); 
    v4.push_back(17);
    v4.push_back(24);

    vector<int>v5; // {9,7,8,1}
    v5.push_back(18); 
    v5.push_back(21); 
    v5.push_back(23); 
    v5.push_back(26);
    v5.push_back(30);

    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3); 
    v.push_back(v4); 
    v.push_back(v5); 

    searchMatrix(v,17);
    
}