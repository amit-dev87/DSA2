

/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp1 = head;
    SinglyLinkedListNode* temp2 = temp1 -> next;
    while(temp2 != nullptr){
        if(temp1 -> data == temp2 -> data){
            temp1 -> next = temp2 -> next;
            temp2 = temp1 -> next;
        }else{
            temp1 = temp1 -> next;
            temp2 = temp1 -> next;
        }
    }
    return head;
}

