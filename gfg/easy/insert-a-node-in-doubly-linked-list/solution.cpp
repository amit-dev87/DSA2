/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        Node * temp = new Node(x);
        if(head ==  NULL){
            return new Node(x);
        }
        Node * temp2 =head;
        for(int i = 1  ; i <= p ; i++){
            temp2 = temp2 -> next;
        }
        temp->next = temp2->next;

        if(temp2->next != NULL){
            temp2->next->prev = temp;
        }
        temp2->next = temp;
        temp->prev = temp2;
        
        return head;
    }
};