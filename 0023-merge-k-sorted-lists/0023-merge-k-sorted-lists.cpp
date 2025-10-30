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
        ListNode*temp;
        ListNode * dummy = new ListNode(0);
        vector<int> arr;

        for(auto list : lists){
            temp = list;

            while(temp){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }

        for(int val : arr){
            cout << val << " ";
        }

        sort(arr.begin(), arr.end());

        temp = dummy;

        for(int i = 0; i < arr.size(); i++){
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }

        return dummy->next;
    }
};