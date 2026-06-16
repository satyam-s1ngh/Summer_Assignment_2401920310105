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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        while(temp!=nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        temp=head;
        while (temp!=nullptr) {
            if (temp->val!=st.top()) return false;
            st.pop();
            temp=temp->next;
        }
        return true;
    }
};

int main(){
    vector<int> v={1,2,2,1};
    ListNode* head=createLL(v);
    Solution ob;
    cout<<ob.isPalindrome(head);
    return 0;
}
