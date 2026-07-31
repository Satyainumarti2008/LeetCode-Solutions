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
    ListNode* gcd(int a,int b){
        int v=INT_MIN;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0&&b%i==0)
                v=max(v,i);
        }
        ListNode* t=new ListNode(v);
        return t;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode *curr1=head,*curr2=head->next;
        while(curr1&&curr1->next){
            ListNode* t=gcd(curr1->val,curr1->next->val);
            curr1->next=t;
            t->next=curr2;
            curr1=curr2;
            curr2=curr2->next;
        }
        return head;
    }
};