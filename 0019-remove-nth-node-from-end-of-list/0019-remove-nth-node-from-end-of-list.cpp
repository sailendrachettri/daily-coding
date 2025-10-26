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
        ListNode*temp = head;
        ListNode *dummy = new ListNode(0);

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        arr[arr.size()-n]  = INT_MIN;

        for(int val : arr){
            cout << val << " ";
        }

        temp = dummy;
        reverse(arr.begin(), arr.end());

        while(!arr.empty()){
            if(arr.back() == INT_MIN){
                arr.pop_back();
                continue; 
            }

            temp->next = new ListNode(arr.back());
            arr.pop_back();
            temp = temp->next;
        }

        return dummy->next;
    }
};