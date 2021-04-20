class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*a=head;
        int c=0;
        if(a==nullptr)
            return a;
        while(a->next!=nullptr)
        { a=a->next;c++;}
        c++;
        a->next=head;
        a=a->next;
        k=c-k%c;
        k=k-1;
        while(k--){
            a=a->next;
        }
        ListNode*prev=a->next;
        a->next=nullptr;
        return prev;
    }
};
