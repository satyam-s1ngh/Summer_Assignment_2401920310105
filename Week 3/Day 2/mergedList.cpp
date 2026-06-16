

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        while(t1!=nullptr&&t2!=nullptr){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=temp->next;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=temp->next;
                t2=t2->next;
            }
        }
        while(t1!=nullptr){
            temp->next=t1;
            temp=temp->next;
            t1=t1->next;
        }
        while(t2!=nullptr){
            temp->next=t2;
            temp=temp->next;
            t2=t2->next;
        }
        return head->next;
    }
};

