#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f!=nullptr&&f->next!=nullptr){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};
