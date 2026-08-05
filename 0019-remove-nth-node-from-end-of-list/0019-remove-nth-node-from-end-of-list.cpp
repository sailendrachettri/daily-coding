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
        ListNode* node = new ListNode(0);

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        arr[arr.size()-n] = INT_MIN;

        temp = node;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != INT_MIN){
                temp->next = new ListNode(arr[i]);
                temp = temp->next;
            }
        }

        return node->next;        
    }
};