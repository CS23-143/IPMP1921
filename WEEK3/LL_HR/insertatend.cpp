SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* a= new SinglyLinkedListNode(data);
    SinglyLinkedListNode* ans=NULL;
    if(head==NULL){
        
    head=a;
    return head;}
    
    ans=head;
    while(ans->next!=NULL){
        ans=ans->next;
    }
    ans->next=a;
    return head;

}
