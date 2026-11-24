/* Structure of linked list Node
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
    Node* removeDuplicates(Node* head) {
        set<int>st;
        Node* curr = head;
        Node* prev = nullptr;
        while(curr != nullptr){
            if(st.find(curr -> data) != st.end()){
                prev -> next = curr -> next;
                delete curr;
                curr = prev -> next;
            }else{
                st.insert(curr -> data);
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};