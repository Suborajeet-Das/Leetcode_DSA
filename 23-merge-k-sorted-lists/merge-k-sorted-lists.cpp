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
    ListNode* sortList(ListNode* l1, ListNode* l2){
        ListNode dummy;
        ListNode* tail = &dummy;

        while(l1 != nullptr && l2!=nullptr){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
            }else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        if(l1==nullptr){
            tail->next = l2;
        }else{
            tail->next = l1;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        ListNode dummy;
        dummy.next = lists[0];

        for(int i=1; i<lists.size(); i++){
            dummy.next = sortList(dummy.next, lists[i]);
        }
        return dummy.next;
    }
};