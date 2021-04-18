class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_set<Node* > a;
        Node* prev=nullptr;
        Node* k=head;
        
        while(k!=nullptr){
            if(a.find(k)!=a.end()){
                prev->next=nullptr;
                break;
            }
            a.insert(k);
            prev=k;
            k=k->next;
        }
    }
};
