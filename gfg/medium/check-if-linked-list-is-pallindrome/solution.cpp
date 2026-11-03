/*
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
    bool isPalindrome(Node *head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        Node* temp1 = head;
        Node* temp2 = head;
        while(temp2 -> next!= nullptr && temp2 -> next -> next != nullptr){
            temp1 = temp1 -> next;
            temp2 = temp2 -> next -> next;
        }
        Node* prev = nullptr;
        Node * curr = temp1 -> next;
        
        while(curr != nullptr){
            Node* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        Node* temp3 = head;
        Node* temp4 = prev;
        while(temp4 != nullptr){
            if(temp3 ->  data != temp4 -> data){
                return false;
            }
            temp3 = temp3 -> next;
            temp4 = temp4 -> next;
        }
      return true;  
    }
};