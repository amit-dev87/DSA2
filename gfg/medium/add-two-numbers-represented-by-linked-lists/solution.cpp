/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
        Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while(curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        if(head1 == nullptr && head2 ==nullptr){
            
            return nullptr;
        } 
        
        Node* temp1 = head1 ;
        
        Node* temp2 = head2;
        
        int carry = 0;
        
        while(temp1 != nullptr || temp2 != nullptr || carry){
            int sum = carry;
            
            if(temp1 != nullptr){
                
                sum += temp1 -> data;
                
                temp1 = temp1 -> next;
            }
            if(temp2 != nullptr){
                
                sum += temp2 -> data;
                
                temp2 = temp2 -> next;
            }
            
            temp -> next = new Node(sum%10);
            
            carry = sum/10;
            
            temp = temp -> next;
        }
        Node * result = reverse(ans -> next);
        
        while(result != nullptr && result->data == 0 && result->next != nullptr) {
            
            Node* del = result;
            
            result = result->next;
            
            delete del;
        }
        
        return result;
    }
};