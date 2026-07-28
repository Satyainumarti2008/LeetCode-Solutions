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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int c=0;
        while(curr!=nullptr){
            c++;
            curr=curr->next;
        }
        if(c==n){
            ListNode* t=head;
            head=head->next;
            delete t;
            return head;
        }
        curr=head;
        for(int i=1;i<c-n;i++)
            curr=curr->next;
        ListNode *t=curr->next;
        curr->next=curr->next->next;
        delete t;
        return head;
    }
};