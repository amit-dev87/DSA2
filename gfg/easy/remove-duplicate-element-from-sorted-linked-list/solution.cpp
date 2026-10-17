/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        Node* temp1 = head;
        Node* temp2 = head->next;
        while(temp2 != NULL){
            if(temp1->data == temp2->data){
                temp1->next = temp2->next;
                temp2 = temp1 -> next ;
            }else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return head;
        
    }
};