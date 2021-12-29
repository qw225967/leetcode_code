#include<iostream>
#include<vector>



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



ListNode* insert_sort(ListNode *head) {
    if(head == nullptr) return head;
    // 创建哑巴节点
    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;
    // 当前插入队列的尾结点
    ListNode* lastNode = head;
    // 待插入节点
    ListNode* currentNode = head->next;
    while(currentNode != nullptr) {
        if(currentNode->val >= lastNode->val) {
            lastNode = lastNode->next;
        } else {
            ListNode *preNode = dummyHead;
            while(preNode->next->val <= currentNode->val) {
                preNode = preNode->next;
            }
            lastNode->next = currentNode->next;
            currentNode->next = preNode->next;
            preNode->next = currentNode;
        }
        currentNode = lastNode->next;
        ListNode *temp = dummyHead->next;
        while(temp!=nullptr) {
            std::cout << temp->val << std::endl;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    return dummyHead->next;
}

int main() {
    ListNode *node1 = new ListNode(2);
    ListNode *node2 = new ListNode(3,node1);
    ListNode *node3 = new ListNode(1,node2);
    ListNode *node4 = new ListNode(4,node3);

    for(ListNode *head = insert_sort(node4); head != nullptr; head = head->next) {
        std::cout << head->val << std::endl;
    }

    return 0;
}
