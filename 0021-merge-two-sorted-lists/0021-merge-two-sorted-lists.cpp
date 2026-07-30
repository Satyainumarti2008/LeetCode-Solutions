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
    ListNode* merge(ListNode *ans,ListNode *list1,ListNode *list2){
        if(list1==nullptr){
            while(list2!=nullptr){
                ans->next=new ListNode(list2->val);
                ans=ans->next;
                list2=list2->next;
            }
            return ans;
        }
        if(list2==nullptr){
            while(list1!=nullptr){
                ans->next=new ListNode(list1->val);
                ans=ans->next;
                list1=list1->next;
            }
            return ans;
        }
        if(list1->val<=list2->val){
            ans->next=new ListNode(list1->val);
            ans=ans->next;
            list1=list1->next;
        }
        else{
            ans->next=new ListNode(list2->val);
            ans=ans->next;
            list2=list2->next;
        }
        
        return merge(ans,list1,list2);
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans=new ListNode();
        merge(ans,list1,list2);
        return ans->next;
    }
};