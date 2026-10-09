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
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        if(count==n){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        for(int i=1;i<count-n;i++){
            temp=temp->next;
        }
        ListNode*temp2=temp->next->next;
        temp->next=temp2;
        return head;
    }
};