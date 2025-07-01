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
        vector<int> arr;
        ListNode* dummy = new ListNode(0);

        ListNode* temp = list1;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        temp = list2;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(arr.begin(), arr.end(), greater<int>());

        temp = dummy;

        while(arr.size() > 0){
            temp->next = new ListNode(arr.back());
            arr.pop_back();
            temp = temp->next;
        }

        return dummy->next;

    }
};