class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int a=0;
        while(head!=nullptr){
            a=2*a+head->val;
            head=head->next;
        }
        return a;
    }
};
