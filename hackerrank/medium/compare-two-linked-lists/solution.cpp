

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1 = head1;
    SinglyLinkedListNode* temp2 = head2;
    while(temp1 != nullptr && temp2 != nullptr){
        if(temp1->data != temp2->data){
            return false;
            break;
        }else{
            temp1 = temp1 -> next;
            temp2 = temp2 -> next; 
        }
    }
    
    return temp1 == nullptr && temp2 == nullptr;
}

