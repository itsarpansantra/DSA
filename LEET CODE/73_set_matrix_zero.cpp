/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/
# include<iostream>
# include<climits>
# include<vector>
# include<cmath>
using namespace std;
void matrixScore(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool firstRow = false, firstCol = false;
    // Step 1: Check if first row has zero
    for (int j = 0; j < cols; j++) {
        if (matrix[0][j] == 0) {
            firstRow = true;
            break;
        }
    }

        // Step 2: Check if first column has zero
        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) {
                firstCol = true;
                break;
            }
        }

        // Step 3: Mark zeros in first row & column
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Update cells based on markers
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Update first row if needed
        if (firstRow) {
            for (int j = 0; j < cols; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 6: Update first column if needed
        if (firstCol) {
            for (int i = 0; i < rows; i++) {
                matrix[i][0] = 0;
            }
        }
}
int main(){
vector<int>v1;
v1.push_back(0);
v1.push_back(1);
v1.push_back(2);
//v1.push_back(1);
vector<int>v2;
v2.push_back(4);
v2.push_back(5);
v2.push_back(1);
//v2.push_back(0);
vector<int>v3;
v3.push_back(1);
v3.push_back(1);
v3.push_back(6);
//v3.push_back(0);
vector< vector<int> > v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
matrixScore(v);
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}