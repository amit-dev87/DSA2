# Rotate List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a linked list, rotate the list to the right by `k` places.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

```

 **Example 2:** 

```
Input: head = [0,1,2], k = 4
Output: [2,0,1]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 500].
- -100 <= Node.val <= 100
- 0 <= k <= 2 * 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.1 MB (beats 99.60%)  
**Submitted:** 2026-11-06T06:54:15.257Z  

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
```

---

[View on LeetCode](https://leetcode.com/problems/rotate-list/)