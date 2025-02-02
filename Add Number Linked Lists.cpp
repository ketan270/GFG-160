class Solution {
  public:
  Node *reverse(Node *head) {
    Node *prev = nullptr, *curr = head, *next;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int countNodes(Node* head) {
    int len = 0;
      Node* curr = head;
  
      while(curr != nullptr) {
        len += 1;
          curr = curr->next;
    }
      return len;
}

Node *trimLeadingZeros(Node* head) {
    while(head->next != nullptr && head->data == 0)
        head = head->next;
    return head;
}
    Node *addTwoLists(Node *num1, Node *num2) {
    num1 = trimLeadingZeros(num1);
    num2 = trimLeadingZeros(num2);
  
      int len1 = countNodes(num1);
      int len2 = countNodes(num2);
      
    if(len1 < len2)
          return addTwoLists(num2, num1);

    int carry = 0;
    num1 = reverse(num1);
    num2 = reverse(num2);
  
    Node *res = num1;

    while (num2 != nullptr || carry != 0) {
      
        num1->data += carry;

        if (num2 != nullptr) {
            num1->data += num2->data;
            num2 = num2->next;
        }
      
        carry = num1->data / 10;
          
        
          num1->data = num1->data % 10;
          
         
          if(num1->next == nullptr && carry != 0)
            num1->next = new Node(0);
      
          num1 = num1->next;
    }


    return reverse(res);
}
};
