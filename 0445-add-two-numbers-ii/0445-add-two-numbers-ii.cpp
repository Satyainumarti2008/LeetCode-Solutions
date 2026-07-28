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
    ListNode* reverse(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev; 
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode d(0);
        ListNode* ans=&(d);
        ListNode *rev1,*rev2;
        rev1=reverse(l1);
        rev2=reverse(l2);
        int c=0;
        while(rev1!=nullptr||rev2!=nullptr){
            int sum=0;
            if(rev1!=nullptr){
                sum+=rev1->val;
                rev1=rev1->next;
            }
            if(rev2!=nullptr){
                sum+=rev2->val;
                rev2=rev2->next;
            }
            ans->next=new ListNode((sum+c)%10);
            ans=ans->next;
            c=(sum+c)/10;
        }
        if(c)
            ans->next=new ListNode(c);
        ListNode* temp=d.next;
        return reverse(temp);
    }
};