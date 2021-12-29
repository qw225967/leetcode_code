#include<iostream>
#include<stack>
#include<queue>

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

void pre(TreeNode* root) {
    if(!root) return;

    stack<TreeNode*> st;
    st.push(root);
    TreeNode* temp = nullptr;
    while(!st.empty()) {
        temp = st.top();
        st.pop();
        cout << temp->val;
        if(temp->left) st.push(temp->left);
        if(temp->right) st.push(temp->right);
    }
}
void pre2(TreeNode* root) {
    if(!root) return;
    cout << root -> val;
    pre2(root->left);
    pre2(root->right);
}

void post(TreeNode* root) {
    if(!root) return;

    stack<TreeNode*> st;
    TreeNode* p = root;
    TreeNode* temp = nullptr;

    while(p || !st.empty()) {
        while(p) {
            st.push(p);
            p = p->left;
        }
        p = st.top();
        if(!p->right || p->right == temp) {
            cout << p -> val;
            st.pop();
            temp = p;
            p = nullptr;
        } else 
            p = p->right;
    }
}


int main() {

    TreeNode* node1 = new TreeNode(7);
    TreeNode* node2 = new TreeNode(6);
    TreeNode* node7 = new TreeNode(5);
    TreeNode* node6 = new TreeNode(4);
    TreeNode* node3 = new TreeNode(3,node2,node1);
    TreeNode* node4 = new TreeNode(2,node6,node7);
    TreeNode* node5 = new TreeNode(1,node4,node3);
    
    inorder(node5);
    cout<<endl;
    preorder(node5);
    cout<<endl;
    pre(node5);
    cout << endl;
    pre2(node5);
    cout << endl;
    post(node5);
    cout << endl;
    return 0;
}

