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
        vector<int> arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        left = left-1;
        right = right-1;

        while(left < right){
            swap(arr[left++], arr[right--]);
        }

        temp = head;

        for(int i = 0; i < arr.size(); i++){
            temp->val = arr[i];
            temp = temp->next;
        }

        return head;
    }
};