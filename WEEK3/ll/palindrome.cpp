class Solution {
public:
    bool isPalindrome(ListNode* head) {
       vector<int> a;
        while(head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[a.size()-i-1])
                return false;
        }
        return true;
        
        
    }
};
