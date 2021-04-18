SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int d) {
    SinglyLinkedListNode* a= new SinglyLinkedListNode(d);
    
    a->next=llist;
    
    return a;

}
