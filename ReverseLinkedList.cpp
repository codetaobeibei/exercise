/*Reverse a singly linked list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 //iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nexth = NULL;
        while(head){
            ListNode *next = head->next;
            head->next=nexth;
            nexth = head;
            head = next;
            
        }
        return nexth;
    }
};

//recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!(head->next)) return head;
        ListNode* node = reverseList(head->next);
        head -> next -> next = head;
        head -> next = NULL;
        return node;
    }
};
