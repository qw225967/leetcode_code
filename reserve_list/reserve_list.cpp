#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x,ListNode *node) : val(x) , next(node) {}
};


ListNode* Reserve_List(ListNode *head) {
    if (head == NULL || head -> next == NULL) return head;
    
    ListNode *dummyNode = new ListNode(0);
    dummyNode -> next = head;
    ListNode *currentNode;

    while(head -> next != NULL) {
        currentNode = head -> next;
        head -> next = currentNode -> next; 
        currentNode -> next = dummyNode -> next;
        dummyNode -> next = currentNode;
    }
    return dummyNode -> next;
}

int main() {
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2,node1);
    ListNode *node3 = new ListNode(3,node2);
    ListNode *node4 = new ListNode(4,node3);

    ListNode *node = Reserve_List(node4);
    while(node != NULL) {
        std::cout << node->val << std::endl;
        node = node -> next;
    }


    return 0;
}
