# Double a Number Represented as a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a  **non-empty**  linked list representing a non-negative integer without leading zeroes.

Return  *the* `head` *of the linked list after  **doubling**  it*.

 

 **Example 1:** 

```
Input: head = [1,8,9]
Output: [3,7,8]
Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.

```

 **Example 2:** 

```
Input: head = [9,9,9]
Output: [1,9,9,8]
Explanation: The figure above corresponds to the given linked list which represents the number 999. Hence, the returned linked list reprersents the number 999 * 2 = 1998. 

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [1, 104]
- 0 <= Node.val <= 9
- The input is generated such that the list represents a number that does not have leading zeros, except the number 0 itself.

## Solution

**Language:** C++  
**Runtime:** 48 ms (beats 15.80%)  
**Memory:** 142.9 MB (beats 13.38%)  
**Submitted:** 2026-11-06T07:28:21.731Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/)