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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        sort(ans.begin(), ans.end(), greater<int>());

        for(int val : ans)
            cout << val << " ";

        temp = head;
        while( ans.size() > 0 && temp != NULL){
            temp->val = ans[ans.size()-1];
            ans.pop_back();
            temp = temp->next;
        }

        return head;
    }
};