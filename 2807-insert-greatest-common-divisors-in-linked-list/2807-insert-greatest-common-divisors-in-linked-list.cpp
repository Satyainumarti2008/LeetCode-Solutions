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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode *curr1=head,*curr2=head->next;
        while(curr1&&curr1->next){
            int v=INT_MIN;
            int a=curr1->val,b=curr1->next->val;
            while(b!=0){
                int temp=b;
                b=a%b;
                a=temp;
            }
            ListNode* t=new ListNode(a);
            curr1->next=t;
            t->next=curr2;
            curr1=curr2;
            curr2=curr2->next;
        }
        return head;
    }
};