# Deletion at the End of a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a Linked List, delete the tail (i.e., the last node) of the Linked List and return the new  **head** of the modified Linked List.

 **Examples:** 

```
Input: head[] = [1, 2, 3, 4, 5]

Output: 1 -> 2 -> 3 -> 4
Explanation: After deleting tail from the given linked list, we'll be left with just 1 -> 2 -> 3 -> 4.

```

```
Input: head[] = [3, 12, 15]

Output: 3 -> 12
Explanation: After deleting tail from the given linked list, we'll be left with just 3 -> 12.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T08:16:19.386Z  

```cpp
/* Linked List Node Structure
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
    Node* removeLastNode(Node* head) {
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        return head;  
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/deletion-at-the-end-of-a-linked-list/1)