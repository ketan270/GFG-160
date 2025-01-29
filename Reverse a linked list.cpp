class Solution {
  public:
    Node* reverseList(Node* head) {
      
    // Create a stack to store the nodes
    stack<Node*> s;
  
    Node* temp = head;
  
      // Push all nodes except the last node into stack
    while (temp->next != NULL) {
        s.push(temp);
        temp = temp->next;
    }
      
      // Make the last node as new head of the linked list
    head = temp;
  
      // Pop all the nodes and append to the linked list
    while (!s.empty()) {
          
        // append the top value of stack in list
        temp->next = s.top();
        
          // Pop the value from stack
        s.pop();
        
          // move to the next node in the list
        temp = temp->next;
    }
      
      // Update the next pointer of last node of stack to NULL
    temp->next = NULL;
  
      return head;
}
};
