SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode*a=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* ans=head;
    
    for(int i=0;i<position-1;i++){
        ans=ans->next;
    }
    SinglyLinkedListNode* temp=ans->next;
    a->next=temp;
    ans->next=a;
    return head;


}
