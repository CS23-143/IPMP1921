class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> hash;
        while(head!=NULL){
            if(hash.find(head)!=hash.end())
                return true;
            hash.insert(head);
            head=head->next;
        }
        return false;
    }
};
