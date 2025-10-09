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
    int pairSum(ListNode* head) {
        ListNode*temp = head;
        vector<int> arr;
        int start = 0, end = 0;
        int ans = INT_MIN;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        end = arr.size()-1;

        while(start < end){
            ans = max(ans, (arr[start++]+arr[end--]));
        }

        return ans;
    }
};