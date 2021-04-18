class Node {
public:
    int data;
    Node* next;
};
void deleteList(Node** head)
{
    Node* current = *head;
    Node* next = NULL;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
 
    *head = NULL;
}
