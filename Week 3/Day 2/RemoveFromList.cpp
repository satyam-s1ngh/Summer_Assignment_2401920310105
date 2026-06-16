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

int main(){
    vector<int> v={1,2,3,4,5};
    ListNode* head=createLL(v);
    Solution ob;
    head=ob.removeNthFromEnd(head,2);
    printLL(head);
    return 0;
}
