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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;
        int c = 0;
        ListNode* curr = head;
        ListNode* temp = nullptr;
        while (curr != nullptr) {
            c++;
            curr = curr->next;
        }
        k = k % c;
        if (k == 0)
            return head;
        curr = head;
        for (int i = 1; i < c - k; i++) {
            curr = curr->next;
        }
        temp = curr->next;
        curr->next = nullptr;
        ListNode* last = temp;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = head;
        return temp;
    }
};