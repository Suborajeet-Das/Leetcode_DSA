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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return head;
        //1->2->3->4->5->o/
        //condition 1: k-1 node = o/
        //condiiton 2: from right k node move to front
        //condition 2.1:kth node is head
        //con 2.2 : last node = head
        //if k > n
        int n = 1;
        
        ListNode *tail = head;
        
        while(tail->next){
            n++;
            tail = tail->next;
        }
        k = k%n;
        if(k==n) return head;

        ListNode* newTail = head;

        for(int i=1; i<n-k; i++){
            newTail = newTail->next;
        }
        tail->next = head;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
        
    }
};