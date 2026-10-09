/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        if(head==NULL){
            Node* newNode= new Node(x);
            head=newNode;
            return head;
        }
        Node* newNode= new Node(x);
        newNode->next=head;
        head=newNode;
        return head;
    }
};