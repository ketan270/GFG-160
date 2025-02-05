// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    Node* findFirstNode(Node* head) {
  
    Node* slow = head;
    Node* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
      
        slow = slow->next;          
      
        fast = fast->next->next;    

       
        if (slow == fast) {
          
            slow = head;
        
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            
            return slow;
        }
    }
    
    return nullptr;
}
};
