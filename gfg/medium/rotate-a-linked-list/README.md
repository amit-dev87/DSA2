# Rotate a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a singly linked list, you need to left rotate the linked list  **k**  times. Return the head of the modified linked list.

 **Examples:** 

```
Input: k = 4,
   
Output: 50 -> 10 -> 20 -> 30 -> 40
Explanation:
Rotate 1: 20 -> 30 -> 40 -> 50 -> 10
Rotate 2: 30 -> 40 -> 50 -> 10 -> 20
Rotate 3: 40 -> 50 -> 10 -> 20 -> 30
Rotate 4: 50 -> 10 -> 20 -> 30 -> 40
   
```

```
Input: k = 6,
   
Output: 30 -> 40 -> 10 -> 20 
   
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T10:34:08.167Z  

```cpp
/* Linked List Node Structure
class Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
     Node * temp = head;
     Node * temp2 = head;
     while(temp2->next != NULL) {
         temp2 = temp2 -> next;
     }
     temp2 -> next = head;
     for(int i = 0 ; i < k ; i++){
         head = head->next;
     }
     while(temp->next != head) {
         temp = temp -> next;
     }  
     temp -> next = nullptr;
     return head;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1)