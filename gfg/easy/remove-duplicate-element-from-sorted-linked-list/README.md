# Remove Duplicates in Sorted Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the head of a sorted singly linked list, remove all duplicate nodes so that each element appears only once. The resulting linked list should remain sorted.

 **Note:**  Try to solve the problem without using extra space.

 **Examples:** 

```
Input: Head: 2 -> 2 -> 4 -> 5
Output: 2 -> 4 -> 5

Explanation: In the given linked list 2 -> 2 -> 4 -> 5, only 2 occurs more than 1 time. So we need to remove it once.

```

```
Input: Head: 2 -> 2 -> 2 -> 2 -> 2
Output: 2

Explanation: In the given linked list  2 -> 2 -> 2 -> 2, 2 is the only element and is repeated 5 times. So we need to remove any four 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T18:11:00.456Z  

```cpp
/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        Node* temp1 = head;
        Node* temp2 = head->next;
        while(temp2 != NULL){
            if(temp1->data == temp2->data){
                temp1->next = temp2->next;
                temp2 = temp1 -> next ;
            }else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return head;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1)