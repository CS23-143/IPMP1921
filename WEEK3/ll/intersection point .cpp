class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode* k=a;
        ListNode* l=b;
        
        int a1=0,b1=0;
        while(k!=nullptr){
            k=k->next;
            a1++;
        }
        while(l!=nullptr){
            l=l->next;
            b1++;
        }
        if(b1>a1){
            while(a1<b1){
                b=b->next;
                a1++;
            }
            while(a!=b){
                a=a->next;
                b=b->next;
            }
            return b;
        }
        else{
            while(b1<a1){
                a=a->next;
                b1++;
            }
            while(a!=b){
                b=b->next;
                a=a->next;
            }
            return a;
            
        }
    }
};
