# Remove Cycle in Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the  **head** of a singly linked list. A cycle exists if the last node points back to a previous node, forming a loop. Remove the loop from the linked list if it exists.

Internally, the driver code uses a variable  **x**  (1-based indexing) to represent the position of the node to which the last node is connected.

The driver code will print "true" if the linked list is correctly modified, otherwise it will print "false".

 **Examples:** 

```
Input:

Output: true
Explanation: The linked list contains a loop that begins at node x = 2. After removing the loop, the driver code prints true.
```

```
Input:

Output: true
Explanation: The linked list does not contain a loop (x = 0).
```

```
Input: 

Output: true
Explanation: The linked list contains a loop that begins at node x = 1. After removing the loop, the driver code prints true.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T02:57:44.272Z  

```cpp
/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                break;
            }
        }

        if(fast == nullptr || fast->next == nullptr) {
            return;
        }

        slow = head;

        if(slow == fast) {
            while(fast->next != slow) {
                fast = fast->next;
            }
            fast->next = nullptr;
            return;
        }

        while(slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = nullptr;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1)