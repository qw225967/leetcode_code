#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty() || inorder.size() != preorder.size())
            return nullptr;
        int n = preorder.size();
        for(int i=0;i<n;i++)
            inorder_count[inorder[i]] = i;

        return helper(preorder,inorder,0,n-1,0,n-1);
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int pre_left, int pre_right, int in_left, int in_right) {
        if(pre_left > pre_right) return nullptr;

        int in_root_index = inorder_count[preorder[pre_left]];

        int subtree_size = in_root_index - in_left;

        TreeNode* root = new TreeNode(preorder[pre_left]);
        root->left = helper(preorder, inorder, pre_left + 1, pre_left + subtree_size, in_left, in_root_index - 1);
        root->right = helper(preorder, inorder, pre_left + subtree_size + 1,  pre_right, in_root_index + 1, in_right);
        return root;
    }
private:
    unordered_map<int, int> inorder_count;
};



int main() {
    vector<int> a = {3,9,20,15,7};
    vector<int> b = {9,3,15,20,7};

    Solution s;
    s.buildTree(a,b);

    return 0;
}
