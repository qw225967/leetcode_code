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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* to_head = helper(head,k);
        while(head != nullptr) {
            helper(head,k);
        }
        return to_head;
    }

    ListNode* helper(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        if(head -> next == nullptr) return head;
        ListNode* head_pre = new ListNode;
        head_pre->next = head;
        for(int i=0;i<k-1;i++) {
            if(head == nullptr) return head_pre->next;
            ListNode* cur = head;
            ListNode* to_head = head_pre->next;
            head_pre->next = head->next;
            head = head -> next;
            cur->next = head -> next;
            head -> next = to_head;
        }
        return head_pre->next;
    }
};

int main() {
    ListNode* node5 = new ListNode(5);    
    ListNode* node4 = new ListNode(4,node5);    
    ListNode* node3 = new ListNode(3,node4);    
    ListNode* node2 = new ListNode(2,node3);    
    ListNode* node1 = new ListNode(1,node2);    


    Solution s;
    s.reverseKGroup(node1,2);




    return 0;
}
