# Detect Loop in Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a singly linked list, find if the given linked list contains a **loop or not**. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.

 **Note:** Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.

 **Examples:** 

```
Input: pos = 2,
   
Output: true
Explanation: There exists a loop as last node is connected back to the second node.

```

```
Input: pos = 0,
   
Output: false
Explanation: There exists no loop in given linked list.

```

```
Input: pos = 1,
   
Output: true
Explanation: There exists a loop as last node is connected back to the first node.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T04:11:16.626Z  

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
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        Node*temp1=head;
        Node*temp2=head;
        while(temp2!=NULL && temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next->next;
            if(temp1==temp2){
                return true;
            }
        }
       return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)