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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int> arr;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        // reverse
        int start = left-1;
        int end = right-1;

        while(start < end){
            swap(arr[start++], arr[end--]);
        }

        reverse(arr.begin(), arr.end());

        while(arr.size() > 0){
            temp->val = arr.back();
            temp = temp->next;
            arr.pop_back();
        }

        return head;
    }
};