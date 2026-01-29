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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* first;
        ListNode* second;
        first = head;
        second = head;
        while(second && second->next){
            first = first->next;
            second = second->next->next;
        }
        ListNode* middleNode = first;
        ListNode* temp = head;
        while(temp->next != middleNode){
            temp = temp->next;
        }
        temp->next = middleNode->next;
        return head;
    }
};
