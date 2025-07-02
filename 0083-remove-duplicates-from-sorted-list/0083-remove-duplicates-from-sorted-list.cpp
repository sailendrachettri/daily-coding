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
        set<int> st;
        vector<int> arr;
        ListNode* dummy = new ListNode(0);

        ListNode* temp = head;

        while(temp != NULL){
            st.insert(temp->val);
            temp = temp->next;
        }

        temp = dummy;

        for(int val : st)
            arr.push_back(val);

        reverse(begin(arr), end(arr));

        while(arr.size() > 0){
            temp->next = new ListNode(arr.back());
            arr.pop_back();
            temp = temp->next;
        }

        return dummy->next;
    }
};