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
    ListNode* mergeNodes(ListNode* head) {
        ListNode d(0);
        ListNode* ans=&(d);
        ListNode* curr=head->next;
        int sum=0;
        while(curr!=nullptr){
            if(curr->val==0){
                ans->next=new ListNode(sum);
                ans=ans->next;
                sum=0;
            }
            else{
                sum+=curr->val;
            }
            curr=curr->next;
        }
        return d.next;
    }
};