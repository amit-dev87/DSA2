/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node * temp1 = head;
        Node * temp2 = head;
        for(int i = 0 ; i < k ; i++){
            if(temp1 == nullptr){
                return -1;
            }
            temp1 = temp1 -> next;
        }
        while(temp1 != nullptr){
            temp2 = temp2 -> next;
            temp1 = temp1 -> next;
        }
        return temp2 -> data;
    }
};