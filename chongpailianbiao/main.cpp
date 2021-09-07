#include<iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        void reorderList(ListNode* head) {
            ListNode *temp1 = head;
            ListNode *temp2 = head;
            while ( temp2->next->next != nullptr ) {
                temp1 = temp1->next;
                temp2 = temp2->next->next;
            } // 找到奇数中点
            if (temp2->next != nullptr) {
                temp2 = temp2->next;

            } // 如果是偶数，则偏移到下一位 
            // 翻转后一个串
            
            ListNode* start = temp1->next;
            ListNode* s = temp1->next; 
            ListNode* t = temp1->next;
            temp1->next = nullptr;

            while (start != nullptr) {
                         
            }
        }
};



int main() {
    ListNode *node4 = new ListNode(4,nullptr); 
    ListNode *node3 = new ListNode(3,node4); 
    ListNode *node2 = new ListNode(2,node3); 
    ListNode *node1 = new ListNode(1,node2); 

    Solution s;
    s.reorderList(node1);

    for(;node1!=nullptr;node1 = node1->next) {
        std::cout << node1->val << std::endl;
    }

    return 0;
}
