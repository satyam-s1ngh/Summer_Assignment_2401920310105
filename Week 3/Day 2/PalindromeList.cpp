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
