/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
    if (!head || k == 1) {
        return head;
    }

    stack<Node*> st; 
    Node *curr = head; 
    Node *prev = nullptr; 
  
    while (curr != nullptr) { 
  
        int count = 0; 
        while (curr != nullptr && count < k) { 
            st.push(curr); 
            curr = curr->next; 
            count++; 
        } 
  
        while (!st.empty()) { 
            
            if (prev == nullptr) { 
                prev = st.top(); 
                head = prev; 
                st.pop(); 
            } else { 
                prev->next = st.top(); 
                prev = prev->next; 
                st.pop(); 
            } 
        } 
    } 
  
    // Set the next pointer of the 
      // last node to NULL
    prev->next = nullptr; 
  
    return head; 
}

};
