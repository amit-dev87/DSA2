# Reverse Linked List II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a singly linked list and two integers `left` and `right` where `left <= right`, reverse the nodes of the list from position `left` to position `right`, and return  *the reversed list*.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]

```

 **Example 2:** 

```
Input: head = [5], left = 1, right = 1
Output: [5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= n <= 500
- -500 <= Node.val <= 500
- 1 <= left <= right <= n

 

 **Follow up:**  Could you do it in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11 MB (beats 92.34%)  
**Submitted:** 2026-11-06T07:41:15.055Z  

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head -> next == nullptr || left == right){
            return head;
        }
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        for(int i = 1; i < left; i++){
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        for(int i = 0; i < right - left; i++){
            ListNode* next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev ->next = next;
        }
        return dummy -> next;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list-ii/)