# Remove Duplicates from Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a head of an unsorted linked list. Remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed.

 **Examples:** 

```
Input: head = 5 -> 2 -> 2 -> 4
Output: 5 -> 2 -> 4
Explanation: Given linked list elements are 5 -> 2 -> 2 -> 4, in which 2 is repeated only. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain 5->2->4
 
```

```
Input: head = 2 -> 2 -> 2 -> 2 -> 2
Output: 2
Explanation: Given linked list elements are 2 -> 2 -> 2 -> 2 -> 2, in which 2 is repeated. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain only 2.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-24T08:33:17.277Z  

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
};*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        set<int>st;
        Node* curr = head;
        Node* prev = nullptr;
        while(curr != nullptr){
            if(st.find(curr -> data) != st.end()){
                prev -> next = curr -> next;
                delete curr;
                curr = prev -> next;
            }else{
                st.insert(curr -> data);
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1)