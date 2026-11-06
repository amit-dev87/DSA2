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
        if(head == nullptr || head->next == nullptr || k == 0){
            return head;
        }
        int len = 1;
        ListNode* temp = head;
        while(temp -> next != nullptr){
            temp = temp -> next;
            len++;
        }
        k = k % len;
        if(k == 0) return head;
        temp -> next =  head;
        for(int i = 1 ; i <len - k ; i++){
            head = head -> next;
        }
        ListNode* temp2 = head;
        head = head -> next;
        temp2 -> next = nullptr;
        return head;
    }
    
};