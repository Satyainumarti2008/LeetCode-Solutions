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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode d(0);
        ListNode *ans=&(d);
        int c=0;
        while(c<a){
            ans->next=new ListNode(list1->val);
            ans=ans->next;
            list1=list1->next;
            c++;
        }
        while(c<=b){
            c++;
            list1=list1->next;
        }
        while(list2!=nullptr){
            ans->next=new ListNode(list2->val);
            ans=ans->next;
            list2=list2->next;
        }
        ans->next=list1;
        return d.next;
    }
};