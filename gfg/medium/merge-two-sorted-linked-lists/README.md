# Merge Two Sorted Linked Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the  **head**  of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list.

 **Examples:** 

```
Input:
  
Output: 2 -> 3 -> 5 -> 10 -> 15 -> 20 -> 40
Explanation:
   
```

```
Input:
  
Output: 1 -> 1 -> 2 -> 4
Explanation:
  
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T15:13:44.115Z  

```cpp
/*  Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* sortedMerge(Node* list1, Node* list2) {
        Node* newNode= new Node(-1);
        Node *temp=newNode;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<=list2->data){
                temp->next=list1;
                list1=list1->next;
            }else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1!=NULL){
            temp->next=list1;
            
        }else{
            temp->next=list2;
        }
        
        Node* head=newNode->next;
        delete newNode;
        return head;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1)