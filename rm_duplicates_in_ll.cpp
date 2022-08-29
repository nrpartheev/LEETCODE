ListNode* deleteDuplicates(ListNode* head) {
    ListNode* result = head;
    if(head == NULL){
        return head;
    }
    else{
        while(head->next!=NULL){
            if(head->val == head->next->val){
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        return result;
    }
}
