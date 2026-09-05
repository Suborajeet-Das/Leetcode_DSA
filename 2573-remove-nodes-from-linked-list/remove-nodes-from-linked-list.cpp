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
    ListNode* removeNodes(ListNode* head) {
        ListNode *i = head;
        stack<ListNode*> st;
        st.push(i);
        i = i->next;
        //new node arrives
        while(i != nullptr){
            //check if stack !empty && top node < curr
            // keep pop
            while(!st.empty() && i->val > st.top()->val){
                st.pop();
            }
            if(st.empty()) head = i;
        //if(!empty)top connect with curr
            if(!st.empty()){
                st.top()->next = i;
            }
        //push curr
            st.push(i);
            i = i->next;
        }
        return head;
    }
};