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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> freq;

        ListNode* temp = nullptr;
        ListNode*dummy = new ListNode(0);

        for(ListNode*list : lists){
            temp = list;

            while(temp){
                freq[temp->val]++;
                temp = temp->next;
            }
            temp = nullptr;
        }

        temp = dummy;

        for(auto it : freq){
            int size = it.second;

            while(size--){
                temp->next = new ListNode(it.first);
                temp = temp->next;
            }
        }

        return dummy->next;

        
    }
};