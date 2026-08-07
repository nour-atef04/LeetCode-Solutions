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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> res;
        queue<TreeNode*> q;

        if(root == nullptr) return res;
        q.push(root);
        int prevChild = 1;

        while(!q.empty()){
            int child = 0;
            int last;
            while(prevChild--){
                TreeNode* front = q.front();
                last = front->val;
                q.pop();
                if(front->left != nullptr){
                    q.push(front->left);
                    child++;
                }
                if(front->right != nullptr){
                    q.push(front->right);
                    child++;
                }
            }
            res.push_back(last);
            prevChild = child;
        }

        return res;
    }
};