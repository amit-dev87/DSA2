# Add 1 to a Linked List Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given head of a linked list where each node contains a single digit. The digits together represent a number formed by concatenating the node values in order. Add 1 to this number and return the head of the modified linked list.

 **Examples :** 

```
Input: Head: 4->5->6
Output: 457

Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 

```

```
Input: Head: 1->2->3
Output: 124
 
Explanation:  1->2->3 represents 123 and when 1 is added it becomes 124. 
```

```
Input: Head: 0->0->1
Output: 002
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T11:39:42.943Z  

```cpp
/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* reverse(Node * head){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        head = reverse(head);
        Node* temp = head;
        int carry = 1;
        while(temp != nullptr && carry){
            int sum = temp -> data + carry;
            temp -> data = sum % 10;
            carry = sum/10;
            
            if(carry && temp->next == nullptr){
                temp -> next = new Node(carry);
                carry = 0;
            }
            temp = temp -> next;
        }
        head = reverse(head);
        
        return head;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1)