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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode dummy;
        ListNode *temp = &dummy;
        ListNode *first = head;
        ListNode *sec = head->next;
        while(first != nullptr && sec != nullptr){
            temp->next = sec;
            temp = first;
            first->next = sec->next;
            sec->next = first;
            first = first->next;
            if(first != nullptr) sec = first->next;
        }
        return dummy.next;

    }
};