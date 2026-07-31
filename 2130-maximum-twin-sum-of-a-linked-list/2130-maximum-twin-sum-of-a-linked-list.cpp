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
    ListNode* reverse(ListNode* slow,ListNode* prev){
        if(slow==nullptr)
            return prev;
        ListNode *t=slow->next;
        slow->next=prev;
        return reverse(t,slow);
    }
    int pairSum(ListNode* head) {
        ListNode *slow=head,*fast=head,*t=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=nullptr;
        fast=reverse(slow->next,prev);
        int maxs=INT_MIN;
        while(fast!=nullptr){
            int sum=0;
            sum+=t->val+fast->val;
            t=t->next;
            fast=fast->next;
            maxs=max(maxs,sum);
        }
        return maxs;
    }
};