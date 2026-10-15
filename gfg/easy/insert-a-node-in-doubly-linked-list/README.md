# Insertion in a Doubly Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **head**  of a doubly-linked list, a position  **p,**  and an integer  **x.**  Insert a new node with value x at the position just after pth node (0-based indexing) in the doubly linked list and return the head of the modified list.

 **Examples:** 

```
Input: p = 2, x = 6

Output: 2 <-> 4 <-> 5 <-> 6
Explanation: Insert a node of value 6 after the 2nd node.

```

```
Input: p = 0, x = 44 

Output: 1 <-> 44 <-> 2 <-> 3 <-> 4
Explanation: Insert a node of value 44 after the 0th node.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T08:07:52.809Z  

```cpp
/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        Node * temp = new Node(x);
        if(head ==  NULL){
            return new Node(x);
        }
        Node * temp2 =head;
        for(int i = 1  ; i <= p ; i++){
            temp2 = temp2 -> next;
        }
        temp->next = temp2->next;

        if(temp2->next != NULL){
            temp2->next->prev = temp;
        }
        temp2->next = temp;
        temp->prev = temp2;
        
        return head;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1)