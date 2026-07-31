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
        ListNode *prev=nullptr,*next=nullptr,*list11=list1;
        int c=0;
        while(list11!=nullptr){
            if(c==a-1){
                prev=list11;
            }
            else if(c==b){
                next=list11->next;
            }
            c++;
            list11=list11->next;
        }
        prev->next=list2;
        while(list2!=nullptr&&list2->next!=nullptr){
            list2=list2->next;
        }
        list2->next=next;
        return list1;
    }
};