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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp;
        vector<int> arr;
        
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);

        while(temp){
            mp[temp->val]++;
            temp = temp->next;
        }

        for(auto it : mp){
            if(it.second == 1){
                arr.push_back(it.first);
            }
        }

        temp = dummy;

        for(int i = 0; i < arr.size(); i++){
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }

        return dummy->next;
    }
};