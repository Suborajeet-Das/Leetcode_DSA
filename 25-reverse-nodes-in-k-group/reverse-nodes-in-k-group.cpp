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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        for(ListNode *i=head; i; i = i->next) n++;

        ListNode *curr = head;
        ListNode dummy(0);
        ListNode *front = &dummy;
        ListNode *back = curr;


        for(int i=0; i<n/k ; i++){
            int c = k;
            ListNode *prev = nullptr;
            while(c--){
                ListNode *nex = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nex;
            }
            front->next = prev;
            back->next = curr;
            front = back;
            back = curr;
        }
        return dummy.next;

    }
};