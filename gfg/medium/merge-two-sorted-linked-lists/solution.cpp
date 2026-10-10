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