

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp2 = new SinglyLinkedListNode(data) ;
    if(head == nullptr){
        return temp2;
    }
    SinglyLinkedListNode* temp = head ;
    while(temp->next != nullptr){
        temp = temp -> next;
    }
    temp -> next = temp2;
    temp2 -> next = nullptr;
    return head;
}

