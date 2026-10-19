

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1 = head1;
    SinglyLinkedListNode* temp2 = head2;
    while(temp1 != temp2){
        if(temp1 == nullptr){
            temp1 = head2;
        }else{
            temp1 = temp1 -> next;
        }
        if(temp2 == nullptr){
            temp2 = head1;
        }else{
            temp2 = temp2 -> next;
        }
    }
    return temp2 -> data;

}

