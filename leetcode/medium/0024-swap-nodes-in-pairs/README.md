# Swap Nodes in Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

 **Example 1:** 

 **Input:**  head = [1,2,3,4]

 **Output:**  [2,1,4,3]

 **Explanation:** 

 **Example 2:** 

 **Input:**  head = []

 **Output:**  []

 **Example 3:** 

 **Input:**  head = [1]

 **Output:**  [1]

 **Example 4:** 

 **Input:**  head = [1,2,3]

 **Output:**  [2,1,3]

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 100].
- 0 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.2 MB (beats 48.53%)  
**Submitted:** 2026-11-22T16:47:38.964Z  

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
```

---

[View on LeetCode](https://leetcode.com/problems/swap-nodes-in-pairs/)