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
        ListNode * temp = head;
        map<ListNode*, int> mp;

        while(temp != NULL){
            auto it = mp.find(temp);
            if(it != mp.end())
                return true;
            else
                mp[temp] = 1;
            
            temp = temp->next;
        }

        return false;
    }
};