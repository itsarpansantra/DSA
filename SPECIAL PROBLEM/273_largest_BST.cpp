/*
You're given a binary tree. Your task is to find the size of the largest subtree within this binary tree that also satisfies the properties of a Binary Search Tree (BST). The size of a subtree is defined as the number of nodes it contains.

Note: A subtree of the binary tree is considered a BST if for every node in that subtree, the left child is less than the node, and the right child is greater than the node, without any duplicate values in the subtree.

Examples :

Input: root = [5, 2, 4, 1, 3]
Root-to-leaf-path-sum-equal-to-a-given-number-copy
Output: 3
Explanation:The following sub-tree is a BST of size 3
Balance-a-Binary-Search-Tree-3-copy
Input: root = [6, 7, 3, N, 2, 2, 4]

Output: 3
Explanation: The following sub-tree is a BST of size 3:
*/
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Info {
public:
    int mini, maxi, size;
    bool isBST;

    Info(int mi, int ma, int sz, bool bst) {
        mini = mi;
        maxi = ma;
        size = sz;
        isBST = bst;
    }
};

class Solution {
public:
    int maxSize = 0;

    Info solve(Node* root) {
        // Base case
        if (root == NULL) {
            return Info(INT_MAX, INT_MIN, 0, true);
        }

        // Left & Right info
        Info left = solve(root->left);
        Info right = solve(root->right);

        // Check BST condition
        if (left.isBST && right.isBST &&
            root->data > left.maxi && root->data < right.mini) {
            
            int currSize = left.size + right.size + 1;
            maxSize = max(maxSize, currSize);

            int newMin = min(root->data, left.mini);
            int newMax = max(root->data, right.maxi);

            return Info(newMin, newMax, currSize, true);
        }

        // Not a BST
        return Info(INT_MIN, INT_MAX, 0, false);
    }

    int largestBst(Node *root) {
        solve(root);
        return maxSize;
    }
};
int main() {
    /*
        Example Tree:
              5
             / \
            2   4
           / \
          1   3

        Largest BST subtree size = 3
    */

    Node* root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    Solution obj;
    cout << obj.largestBst(root);

    return 0;
}