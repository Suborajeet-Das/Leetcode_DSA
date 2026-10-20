/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return nullptr;
        ListNode *temp = head;
        //find the size sz
        int sz = 0;
        while(temp!=nullptr){
            sz++;
            temp = temp->next;
        }
        //calculate the node using sz-n+1
        int node = sz-n+1;
        //update head;
        if(node==1){
            return head->next;
        }
        //use first pointer for node-1
        temp = head;
        ListNode *first = nullptr;
        for(int i=1; i<node-1; i++){
            temp = temp->next;
        }
        first = temp;
        temp = temp->next->next;

        first->next = temp;

        return head;
    }
};