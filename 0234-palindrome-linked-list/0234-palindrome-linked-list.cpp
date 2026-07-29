/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *curr=head,*prev=nullptr;
        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return 1;
        ListNode d(0);
        ListNode* ans=&(d);
        ListNode* curr=head;
        while(curr!=nullptr){
            ans->next=new ListNode(curr->val);
            ans=ans->next;
            curr=curr->next;
        }
        ListNode* rev=reverse(d.next);
        curr=head;
        while(curr!=nullptr){
            if(curr->val!=rev->val)
                return 0;
            curr=curr->next;
            rev=rev->next;
        }
        return 1;
    }
};