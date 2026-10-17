/* Linked List Node Structure
class Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
     Node * temp = head;
     Node * temp2 = head;
     while(temp2->next != NULL) {
         temp2 = temp2 -> next;
     }
     temp2 -> next = head;
     for(int i = 0 ; i < k ; i++){
         head = head->next;
     }
     while(temp->next != head) {
         temp = temp -> next;
     }  
     temp -> next = nullptr;
     return head;
    }
};