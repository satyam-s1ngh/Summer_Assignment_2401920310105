#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int d,ListNode* n){
            val=d;
            next=n;
        }
        ListNode(int d){
            val=d;
            next=nullptr;
        }
    };

ListNode* createLL(vector<int> arr){
    ListNode* head= new ListNode(arr[0]);
    ListNode* m=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        m->next=temp;    
        m=m->next;
    }
    return head;
}

void printLL(ListNode* head){
    ListNode* temp=head;
    while(temp!=nullptr){
        cout << temp->val << " ";
        temp=temp->next;
    }
}

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

int main(){
    vector<int> v1={1,2,4};
    vector<int> v2={1,3,4};
    ListNode* head1=createLL(v1);
    ListNode* head2=createLL(v2);
    Solution ob;
    ListNode* head=ob.mergeTwoLists(head1,head2);
    printLL(head);
    return 0;
}
