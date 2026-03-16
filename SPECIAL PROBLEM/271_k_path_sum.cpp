/*
Given the root of a binary tree and an integer k, determine the number of downward-only paths where the sum of the node values in the path equals k.

Note: A path can start and end at any node within the tree but must always move downward (from parent to child).

Examples:

Input: root = [8, 4, 5, 3, 2, N, 2, 3, -2, N, 1], k = 7

Output: 3
Explanation: The following paths sum to k
 
Input: root = [1, 2, 3], k = 3

Output: 2 
Explanation: The following paths sum to k

*/
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  
    void dfs(Node* root, long currSum, int k, int &count, unordered_map<long,int> &mp){
        if(root == NULL)
            return;

        currSum += root->data;

        if(mp.find(currSum - k) != mp.end()){
            count += mp[currSum - k];
        }

        mp[currSum]++;

        dfs(root->left, currSum, k, count, mp);
        dfs(root->right, currSum, k, count, mp);

        mp[currSum]--; // backtrack
    }

    int countAllPaths(Node *root, int k) {
        unordered_map<long,int> mp;
        mp[0] = 1;

        int count = 0;
        dfs(root, 0, k, count, mp);

        return count;
    }
};

int main() {
    /*
        Example Tree
                8
              /   \
             4     5
            / \     \
           3   2     2
          / \   \
         3  -2   1
    */

    Node* root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(2);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right->right = new Node(1);

    int k = 7;

    Solution obj;
    cout << obj.countAllPaths(root, k);

    return 0;
}