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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> mp;
        ListNode*temp = head;
        ListNode* dummy = new ListNode(0);

        for(int val : nums){
            mp[val]++;
        }

        nums.clear();

        while(temp){
            auto it = mp.find(temp->val);

            if(!(it != mp.end())){
                nums.push_back(temp->val);
            }

            temp = temp->next;
        }

        temp = dummy;
        for(int i = 0; i < nums.size(); i++){
            temp->next = new ListNode(nums[i]);
            temp  = temp->next;
        }

        return dummy->next;
    }
};