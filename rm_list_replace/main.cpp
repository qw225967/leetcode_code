#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return nullptr;
        ListNode* pre_head = new ListNode(0);
        pre_head -> next = head;
        ListNode* temp = pre_head;
        while(temp && temp->next != nullptr) {
            if(temp->next->val == val) {
                deletenode(temp);
            } else
              temp = temp->next;
        }
        return pre_head->next;
    }
    void deletenode(ListNode* pre_node) {
        if(pre_node == nullptr) return;
        if(pre_node -> next != nullptr) {
            ListNode* temp = pre_node -> next;
            pre_node -> next = pre_node -> next -> next;
            temp = nullptr;
        }
    }

};

int main() {
    ListNode* node1 = new ListNode(7);
    ListNode* node2 = new ListNode(7,node1);
    ListNode* node3 = new ListNode(7,node2);
    ListNode* node4 = new ListNode(7,node3);

    Solution s;
    s.removeElements(node4,7);

    return 0;
}
