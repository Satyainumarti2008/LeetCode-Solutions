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
    ListNode* rev(ListNode* head){
        ListNode *prev=nullptr,*curr=head;
        while(curr!=nullptr){
            ListNode* t=curr->next;
            curr->next=prev;
            prev=curr;
            curr=t;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* ans=rev(head);
        ListNode* temp=ans;
        while(temp!=nullptr&&temp->next!=nullptr){
            if(temp->val>temp->next->val){
                ListNode* v=temp->next;
                temp->next=v->next;
            }
            else{
                temp=temp->next;
            }
        }
        return rev(ans);
    }
};