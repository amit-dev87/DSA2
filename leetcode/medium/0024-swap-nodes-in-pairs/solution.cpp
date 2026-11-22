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
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = temp1 -> next;
        head = temp2;
        while(temp1 != nullptr && temp2 != nullptr){
            temp1 -> next = temp2 -> next;
            temp2 -> next = temp1;

            ListNode* nextpair = temp1 -> next;
            if(nextpair == nullptr || nextpair -> next == nullptr){
                break;
            }
            temp1 -> next = nextpair -> next;
            temp1 = nextpair;
            temp2 = temp1 -> next;
        }
        return head;
    }
};