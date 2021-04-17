void reversePrint(SinglyLinkedListNode* head) {
    stack <int> a;
    while(head!=NULL){
        a.push(head->data);
        head=head->next;
    }
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
}
