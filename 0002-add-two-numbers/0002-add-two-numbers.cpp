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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* temp3 = dummy;
        int diff = 0;
        int len1 = 0, len2 = 0;
        int carry = 0;

        while(temp1->next != NULL){
            len1++;
            temp1 = temp1->next;
        }
        while(temp2->next != NULL){
            len2++;
            temp2 = temp2->next;
        }

        cout << len1 << " " << len2;

        diff = abs(len1-len2);

        if(len1 < len2){
            while(diff--){
                temp1->next = new ListNode(0);
                temp1 = temp1->next;
            }

        }else if(len2 < len1){
            while(diff--){
                temp2->next = new ListNode(0);
                temp2 = temp2->next;
            }
        }

        temp1 = l1; temp2 = l2;
        temp3 = dummy;

        while(temp1 && temp2){
            int sum = temp1->val + temp2->val + carry;
            temp3->next = new ListNode(sum%10);
            carry = sum / 10;
            temp1 = temp1->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }

        if(carry){
            temp3->next = new ListNode(1);
        }

        return dummy->next;
    }
};