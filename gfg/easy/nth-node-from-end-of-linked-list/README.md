# Kth from End of Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **head**  of a linked list and an integer  **k**, return the kth node from the end of the linked list. If k is greater than the number of nodes in the list, return -1.

 **Examples :** 

```
Input: k = 2

Output: 8
Explanation: 

The 2nd node from end is 8.
```

```
Input: k = 3

Output: 40

The 3rd node from the end is 40.
```

```
Input: k = 5

Output: -1
Explanation: The given linked list is 10 -> 5 -> 100 -> 5. Since 'k' is more than the number of nodes, the output is -1.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T16:27:28.206Z  

```cpp
/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node * temp1 = head;
        Node * temp2 = head;
        for(int i = 0 ; i < k ; i++){
            if(temp1 == nullptr){
                return -1;
            }
            temp1 = temp1 -> next;
        }
        while(temp1 != nullptr){
            temp2 = temp2 -> next;
            temp1 = temp1 -> next;
        }
        return temp2 -> data;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1)