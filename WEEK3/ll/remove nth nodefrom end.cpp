class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode*a=head;
        int c=0;
        if(head==nullptr)
            return nullptr;
        while(a!=nullptr){
            a=a->next;
            c++;
        }
        ListNode*b=head;
        ListNode*ct=nullptr;
        if(c-n==0)
            return head->next;
        for(int i =0;i<c-n-1;i++){
            ct=b;
            b=b->next;
        }
        b->next=b->next->next;
        return head;
    }
};
