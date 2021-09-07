#include <iostream>

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
        ListNode* reverseList(ListNode* head) {
            if (head == nullptr) return nullptr;
            ListNode *start = head;
            head = head->next;
            start->next = nullptr;
            while(head != nullptr) {
                ListNode *temp = head;
                head = head->next;
                temp->next = start;
                start = temp;
            }
            return start;
        }
};

int main() {
    ListNode *node1 = new ListNode(1,nullptr);
    ListNode *node2  = new ListNode(2,node1);
    ListNode *node3 = new ListNode(3,node2);
   
    Solution s;
    auto h =  s.reverseList(node3);

    while(h != nullptr) {
        std::cout << h->val << std::endl;
        h = h->next;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
