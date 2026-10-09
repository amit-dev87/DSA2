# Reverse a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **head** of a singly linked list. Reverse the linked list and return the head of the reversed list.

 **Examples:** 

```
Input:

Output: 4 -> 3 -> 2 -> 1
Explanation: After reversing the linked list

```

```
Input: 

Output: 8 -> 9 -> 10 -> 7 -> 2
Explanation: After reversing the linked list

```

```
Input: 

Output: 8
Explanation:

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T03:45:08.974Z  

```cpp
/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node*prev=NULL;
        Node*curr=head;
        while(curr!=NULL){
            Node* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1)