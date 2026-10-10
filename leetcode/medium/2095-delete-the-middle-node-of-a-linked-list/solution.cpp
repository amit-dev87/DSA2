class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            delete head;
            return NULL;
        }

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = prev->next->next;
        delete slow;
        return head;
    }
};