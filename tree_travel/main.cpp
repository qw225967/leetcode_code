#include<iostream>
#include<stack>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x,TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};


void inorder(TreeNode* root) {
    //空树
    if (root == NULL)
        return;
    //树非空
    TreeNode* p = root;
    stack<TreeNode*> s;
    while (!s.empty() || p)
    {
        if (p) {
            s.push(p);
            p = p->left;
        } else {
            p = s.top();
            s.pop();
            cout << p->val; //打印在出栈时
            p = p->right;
        }

    }
}

void preorder(TreeNode* root) {
    //空树
    if (root == NULL)
        return;
    //树非空
    TreeNode* p = root;
    stack<TreeNode*> s;
    while (!s.empty() || p)
    {
        if (p) {
            cout << p->val; //入队时打印
            s.push(p);
            p = p->left;
        } else {
            p = s.top();
            s.pop();
            p = p->right;
        }

    }
}

int main() {

    TreeNode* node1 = new TreeNode(7);
    TreeNode* node2 = new TreeNode(15);
    TreeNode* node3 = new TreeNode(20,node2,node1);
    TreeNode* node4 = new TreeNode(9);
    TreeNode* node5 = new TreeNode(3,node4,node3);
    
    inorder(node5);
    cout<<endl;
    preorder(node5);
    return 0;
}
