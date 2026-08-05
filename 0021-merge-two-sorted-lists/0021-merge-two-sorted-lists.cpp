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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *node = new ListNode(0);
        ListNode *temp = node;

        ListNode *t1 = list1;
        ListNode *t2 = list2;

        while(t1 && t2){
            if(t1->val <= t2->val){
                temp->next = new ListNode(t1->val);
                temp = temp->next;
                t1 = t1->next;
            }else{
                temp->next = new ListNode(t2->val);
                temp = temp->next;
                t2 = t2->next;
            }
        }

        while(t1){
            temp->next = new ListNode(t1->val);
            temp = temp->next;
            t1 = t1->next;
        }

        while(t2){
            temp->next = new ListNode(t2->val);
            temp = temp->next;
            t2 = t2->next;
        }

        return node->next;
    }
};