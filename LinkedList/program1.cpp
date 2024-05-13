Problem Link:-
https://leetcode.com/problems/reverse-linked-list/description/

Code:-
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            ListNode* ahead=temp->next;
            temp->next=prev;
            prev=temp;
            temp=ahead;
        }
        return prev;
    }
};
