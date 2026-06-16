class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=head;
        ListNode* t;
        while(temp!=nullptr){
            l++;
            temp=temp->next;
        }
        temp=head;
        l-=n;
        if(l==0){
            t=head;
            head=head->next;
            delete(t);
            return head;
        }
        for(int i=0;i<l-1;i++){
            temp=temp->next;
        }
        t=temp->next;
        temp->next=temp->next->next;
        delete(t);
        return head;
    }
};
