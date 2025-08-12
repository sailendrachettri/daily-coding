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
    void reorderList(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;

        while(temp){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        int start = 0;
        int end = nums.size()-1;
        vector<int> ans;

        while(start<=end){
            ans.push_back(nums[start++]);
            if(start < end)
                ans.push_back(nums[end--]);
        }

        temp = head;

        reverse(ans.begin(), ans.end());

        while(!ans.empty()){
            temp->val = ans.back();
            temp = temp->next;
            ans.pop_back();
        }

    }
};