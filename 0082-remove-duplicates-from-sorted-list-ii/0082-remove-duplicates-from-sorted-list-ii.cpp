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

        while(temp != NULL){
            mp[temp->val]++;
            temp = temp->next;
        }

        for(auto it : mp){
            if(it.second == 1)
                arr.push_back(it.first);
        }

        for(int val : arr)
            cout << val << " ";
        

        temp = dummy;

        reverse(arr.begin(), arr.end());

        while(arr.size() > 0){
            temp->next = new ListNode(arr.back());
            temp = temp->next;
            arr.pop_back();
        }

        return dummy->next;


    }
};