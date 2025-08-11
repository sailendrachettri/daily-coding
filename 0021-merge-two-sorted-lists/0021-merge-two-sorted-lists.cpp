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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        map<int, int> mp;
        ListNode* dummy = new ListNode(0);

        ListNode* temp = list1;

        while(temp){
            mp[temp->val]++;
            temp = temp->next;
        }

        temp = list2;
        while(temp){
            mp[temp->val]++;
            temp = temp->next;
        }

        temp = dummy;

        for(auto it : mp){
            for(int i = 0; i < it.second; i++){
                temp->next  = new ListNode(it.first);
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};