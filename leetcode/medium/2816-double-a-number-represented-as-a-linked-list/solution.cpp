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
    ListNode* doubleIt(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode * temp = head;
        ListNode * temp2 = dummy;
        string s;
        while(temp != nullptr){
            s.push_back(temp -> val + '0');
            temp = temp -> next;
        }
        int carry = 0;

        for(int i = s.size() - 1; i >= 0; i--){
            int val = (s[i] - '0') * 2 + carry;

            s[i] = (val % 10) + '0';
            carry = val / 10;
        }

        if(carry){
            s.insert(s.begin(), carry + '0');
        }
        for(int i = 0 ; i < s.size() ; i++){
            temp2 -> next = new ListNode(s[i] - '0');
            temp2 = temp2 -> next;
        }
    return dummy -> next;
    }
};