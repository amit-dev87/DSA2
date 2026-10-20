

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    if(llist == nullptr){
        return temp;
    }
    temp -> next = llist;
    return temp;
    
    

}

