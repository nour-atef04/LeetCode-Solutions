/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inOrder(root, arr);
        return bst(arr, 0, arr.size()-1);
    }

    void inOrder(TreeNode* root, vector<int>& arr){
        if(root == nullptr) return;
        inOrder(root->left, arr);
        arr.push_back(root->val);
        inOrder(root->right, arr);
    }

    TreeNode* bst(vector<int> arr, int l, int r){
        if(l > r) return nullptr;
        int mid = l + (r-l)/2;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = bst(arr, l, mid-1);
        node->right = bst(arr, mid+1, r);
        return node;
    }
};