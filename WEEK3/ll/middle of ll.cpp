class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        else{
            ListNode*a=head;
            int size=0;
            while(a!=nullptr){
                a=a->next;
                size++;
            }
            for(int i=0;i<size/2;i++){
                head=head->next;
            }
            return head;
        }
    }
};
