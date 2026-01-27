/*
You are given a matrix mat[][] of size n*m containing english alphabets and a string word. Check if the word exists on the mat[][] or not. The word can be constructed by using letters from adjacent cells, either horizontally or vertically. The same cell cannot be used more than once.

Examples :

Input: mat[][] = [['T', 'E', 'E'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
Output: true
Explanation: Word "GEEK" can be found in the given grid as follows.

Input: mat[][] = [['T', 'E', 'U'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
Output: false
Explanation: Word "GEEK" cannot be found in the given grid.

Input: mat[][] = [['A', 'B', 'A'], ['B', 'A', 'B']], word = "AB"
Output: true
Explanation: There are multiple ways to construct the word "AB".

*/
# include<iostream>
# include<vector>
using namespace std;
bool dfs(int i, int j, int idx, vector<vector<char>>& mat, string& word) {
    int n = mat.size();
    int m = mat[0].size();
    if (idx == word.size()) return true;
        
    if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != word[idx]) return false;
        
    char temp = mat[i][j];
    mat[i][j] = '#'; // mark visited
        
    bool found = dfs(i+1, j, idx+1, mat, word) || dfs(i-1, j, idx+1, mat, word) ||
                 dfs(i, j+1, idx+1, mat, word) ||dfs(i, j-1, idx+1, mat, word);
        
    mat[i][j] = temp; // unmark
    return found;
}
bool search(vector<vector<char>>&v,string s){
    int n = mat.size();
    int  m = mat[0].size();
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == word[0]) {
                if (dfs(i, j, 0, mat, word))
                    return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<char>>v = {{'T', 'E', 'E'},{'S', 'G', 'K'},{'T', 'E', 'L'}};
    string s = "GEEK";
    cout<<search(v,s);
}