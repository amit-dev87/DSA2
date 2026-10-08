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