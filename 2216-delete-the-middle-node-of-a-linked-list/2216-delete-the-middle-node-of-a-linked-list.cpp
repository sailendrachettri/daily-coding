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
        vector<int> nums;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);

        while(temp){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        temp = dummy;

        for(int i = nums.size()/2; i < nums.size()-1; i++){
            nums[i] = nums[i+1];
        }


        nums.pop_back();

        reverse(nums.begin(), nums.end());
        while(!nums.empty()){
            temp->next = new ListNode(nums.back());
            temp = temp->next;
            nums.pop_back();
        }


        return dummy->next;
    }
};