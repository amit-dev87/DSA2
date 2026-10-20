

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(-1);
    SinglyLinkedListNode* temp1 = temp;
    while(head1 != nullptr && head2 != nullptr){
        if(head1 -> data <= head2 -> data){
            temp -> next = head1;
            head1 = head1 -> next;
        }else{
            temp -> next = head2;
            head2 = head2 -> next;
        }
        temp = temp -> next;
    }
    while(head1 != nullptr){
        temp -> next = head1;
        head1 = head1 -> next;
        temp = temp -> next;
    }
    while(head2 != nullptr){
        temp -> next = head2;
        head2 = head2 -> next;
        temp = temp -> next;
    }
  return temp1 -> next;
}

