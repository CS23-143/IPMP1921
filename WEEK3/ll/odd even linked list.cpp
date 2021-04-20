class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* a=head;
        if(head==nullptr||head->next==nullptr||head->next->next==nullptr)
            return head;
        ListNode*b= head->next;
        ListNode*k=b;
        while(a->next!=nullptr&&b->next!=nullptr){
            a->next=b->next;
            a=a->next;
            b->next=a->next;
            b=b->next;
        }
        a->next=k;
        return head;
    }
};
