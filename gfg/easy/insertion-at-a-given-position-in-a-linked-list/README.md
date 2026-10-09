# Insert in a Singly Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **head** of a Singly Linked List, a position  **pos** and value  **val**. Insert the val data at the given position (1-based index) of the Linked List and return the head of the modified Linked List.

 **Examples:** 

```
Input: head[] = [1, 3], pos = 3, val = 4

Output: 1 -> 3 -> 4
Explanation: After inserting 4 at position 3 we'll get our linked list as - 

```

```
Input: head[] = [1, 2, 9], pos = 2, val = 5

Output: 1 -> 5 -> 2 -> 9
Explanation: After inserting 5 at position 2 we'll get our linked list as -

```

**Constraints:
**1 ≤ number of nodes ≤ 104 
1 ≤ pos ≤ number of nodes + 1
1 ≤ val ≤ 104

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T04:27:42.092Z  

```cpp
/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        Node*newNode=new Node(val);
        Node*temp=head;
        if(pos==1){
            newNode->next=head;
            head=newNode;
            return head;
            
        }
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/insertion-at-a-given-position-in-a-linked-list/1)