#include <iostream>

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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isValidBST(TreeNode *root) {

    }
};

TreeNode* GetTree() {
  TreeNode *root4 = new TreeNode(4);
  TreeNode *node1 = new TreeNode(1);
  TreeNode *node2 = new TreeNode(2);
  TreeNode *node3 = new TreeNode(3);
  TreeNode *node5 = new TreeNode(5);
  TreeNode *node6 = new TreeNode(6);
  TreeNode *node7 = new TreeNode(7);

  root4->left = node2;
  root4->right = node6;
  node2->left = node1;
  node2->right = node3;
  node6->left = node5;
  node6->right = node7;
  return root4;
}

bool Helper(TreeNode* root, long long pre_left, long long pre_right) {
  if (root == nullptr) return true;
  if (root->val <= pre_left || root->val >= pre_right) return false;
  return Helper(root->left, pre_left, root->val) && Helper(root->right, root->val, pre_right);
}

class Solution_std {
public:
    bool helper(TreeNode* root, long long lower, long long upper) {
      if (root == nullptr) {
        return true;
      }
      if (root -> val <= lower || root -> val >= upper) {
        return false;
      }
      return helper(root -> left, lower, root -> val) && helper(root -> right, root -> val, upper);
    }
    bool isValidBST(TreeNode* root) {
      return helper(root, LONG_MIN, LONG_MAX);
    }
};

int main() {
  auto root = GetTree();
  Helper(root, LONG_MIN, LONG_MAX);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
