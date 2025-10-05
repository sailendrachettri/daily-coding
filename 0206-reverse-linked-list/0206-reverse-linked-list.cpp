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
        vector<int> nums;
        ListNode* temp = head;

        while(temp){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        // reverse(nums.begin(), nums.end());

        temp = head;

        while(temp){
            temp->val = nums.back();
            nums.pop_back();
            temp = temp->next;
        }

        return head;

    }
};