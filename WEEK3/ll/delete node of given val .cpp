class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*a=head;
        ListNode*pre=nullptr;
        int i=0;
        while(a!=nullptr){
           
            if(a->val==val&&i==0){
                head=head->next;
                i--;
            }
            else if(a->val==val&&i!=0){
                ListNode* b=a;
                pre->next=a->next;
                a=pre;
                
               
            }
            i++;
            pre=a;
            a=a->next;
        }
        return head;
    }
};
