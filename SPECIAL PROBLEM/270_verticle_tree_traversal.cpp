/*
Given the root of a Binary Tree, find the vertical traversal of the tree starting from the leftmost level to the rightmost level.

Note: If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Examples:

Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, 8, N, 9, N, 10, 11, N]
                    
Output: [[4], [2], [1, 5, 6, 11], [3, 8, 9], [7], [10]]
Explanation: The below image shows the horizontal distances used to print vertical traversal starting from the leftmost level to the rightmost level.
     
Input: root = [1, 2, 3, 4, 5, N, 6]
     
Output: [[4], [2], [1, 5], [3], [6]]
Explanation: From left to right the vertical order will be [[4], [2], [1, 5], [3], [6]]
*/
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> ans;
        
        if(root == NULL) return ans;
        
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        
        while(!q.empty()){
            Node* node = q.front().first;
            int hd = q.front().second;
            q.pop();
            
            mp[hd].push_back(node->data);
            
            if(node->left)
                q.push({node->left, hd-1});
                
            if(node->right)
                q.push({node->right, hd+1});
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    
    Solution obj;
    
    vector<vector<int>> res = obj.verticalOrder(root);
    
    for(auto v : res){
        cout<<"[ ";
        for(int x : v)
            cout<<x<<" ";
        cout<<"] ";
    }
    
    return 0;
}