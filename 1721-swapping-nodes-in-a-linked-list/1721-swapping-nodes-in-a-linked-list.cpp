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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode *v1=nullptr,*v2=nullptr;
        int c=0,p=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            p++;
            if(p==k){
                v1=temp;
            }
            if(p==c-k+1){
                v2=temp;
            }
            temp=temp->next;
        }
        swap(v1->val,v2->val);
        return head;
    }
};