class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set<ListNode*> ans;
        while(head!=nullptr){
            
            if(ans.find(head)!=ans.end())
                return head;
            ans.insert(head);
            head=head->next;
        }
        return nullptr;
    }
};
