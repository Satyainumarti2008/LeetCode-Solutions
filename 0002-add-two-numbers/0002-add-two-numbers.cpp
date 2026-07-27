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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode d(0);
        ListNode* ans=&(d);
        int c=0;
        while(l1!=nullptr&&l2!=nullptr){
            int sum=l1->val+l2->val+c;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
            c=sum/10;
        }
        while(l1!=nullptr)
        {
            int sum=l1->val+c;
            ans->next=new ListNode(sum%10);
            c=sum/10;
            ans=ans->next;
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            int sum=l2->val+c;
            ans->next=new ListNode(sum%10);
            c=sum/10;
            ans=ans->next;
            l2=l2->next;
        }
        if(c)
            ans->next=new ListNode(c);
        return d.next;
    }
};