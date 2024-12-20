/**
 * Definition for a binary tree node.
 * struct TreeNode {
       int target;
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
    TreeNode* searchBST(TreeNode* root, int val) {
                if(root->val == target) return root;

        //if the target is lesser than the root->val, then 
        else if(root->val > target) return searchBST(root->left,target);
        else return searchBST(root->right, target);

        // If the root is null (i.e., the tree is empty) or we have reached a leaf node,
        // we cannot find the target in the tree, so we return null.
        if (root == NULL) return NULL;

        // If the current node's value is equal to the target value,
        // then we have found the node containing the target value, so we return this node.
        if (root->val == target) return root;

        // If the target value is lesser than the current node's value,
        // we need to search in the left subtree of the current node.
        // So we recursively call the searchBST function with the left child of the current node.
        else if(root->val > target) return searchBST(root->left,target);

        // If the target value is greater than the current node's value,
        // we need to search in the right subtree of the current node.
        // So we recursively call the searchBST function with the right child of the current node.
        else return searchBST(root->right, target);
