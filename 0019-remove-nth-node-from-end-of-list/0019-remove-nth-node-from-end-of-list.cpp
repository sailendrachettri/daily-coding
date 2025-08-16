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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> nums;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);

        while(temp){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        nums[nums.size()-n] = INT_MIN;

        reverse(begin(nums), end(nums));

        temp = dummy;

        while(!nums.empty()){
            if(nums.back() != INT_MIN){
                temp->next = new ListNode(nums.back());
                temp = temp->next;
            }
            nums.pop_back();
        }

        return dummy->next;
    }
};