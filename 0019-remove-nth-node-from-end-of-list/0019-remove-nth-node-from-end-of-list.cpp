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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> arr;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);


        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        arr.erase(arr.begin()+ arr.size()-n);

        reverse(arr.begin(), arr.end());

        temp = dummy;

        while(arr.size() > 0){
            temp->next = new ListNode(arr.back());
            temp = temp->next;
            arr.pop_back();
        }

        return dummy->next;
    }
};