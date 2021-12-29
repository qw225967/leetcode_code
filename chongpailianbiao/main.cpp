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
            if (head->next == nullptr) return;
            ListNode *temp1 = head;
            ListNode *temp2 = head;
            while ( temp2->next != nullptr && temp2->next->next != nullptr ) {
                temp1 = temp1->next;
                temp2 = temp2->next->next;
            } // 找到奇数中点
            if (temp2->next != nullptr) {
                temp2 = temp2->next;

            } // 如果是偶数，则偏移到下一位 
            // 翻转后一个串

            ListNode* start = temp1->next;
            ListNode* end = temp1;
            end -> next = nullptr;

            ListNode* s = start;
            ListNode* t = start;
            start = start->next;
            s->next = nullptr;

            while (start != nullptr) {
                t = start;
                start = start->next;
                t->next = s;
                s = t;
            }

            ListNode* st = head;
            ListNode* move = st;
            start = s;
            while(start != nullptr && st != nullptr) {
              if (move != st)
                  move->next = st;
              s = st;
              t = start;
              start = start -> next;
              st = st -> next;
              s->next = t;
              t->next = nullptr;
              move = t;
            }
            while(start != nullptr){
                move->next = start;
                start = start->next;
                move = start;
            }
            while(st != nullptr){
                move->next = st;
                st = st->next;
                move = st;
            }
        }
};



int main() {
    ListNode *node1 = new ListNode(5,nullptr);
//    ListNode *node4 = new ListNode(4,node5);
//    ListNode *node3 = new ListNode(3,node4);
//    ListNode *node2 = new ListNode(2,node3);
//    ListNode *node1 = new ListNode(1,node2);

    Solution s;
    s.reorderList(node1);

    for(;node1!=nullptr;node1 = node1->next) {
        std::cout << node1->val << std::endl;
    }

    return 0;
}
