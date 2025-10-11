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
        vector<int> arr;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(arr.begin(), arr.end(), greater<int>());

        temp = head;

        while(!arr.empty()){
            temp->val = arr.back();
            arr.pop_back();
            temp = temp->next;
        }

        return head;
        
    }
};