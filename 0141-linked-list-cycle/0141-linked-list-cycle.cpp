/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;

        unordered_map<ListNode*, int> mp;
        ListNode* temp = head;

        while(temp){
            auto it = mp.find(temp->next);

            if(it != mp.end()){
                 return true;
            }

            mp[temp->next]++;
            temp = temp->next;
        }

        return false;
    }
};