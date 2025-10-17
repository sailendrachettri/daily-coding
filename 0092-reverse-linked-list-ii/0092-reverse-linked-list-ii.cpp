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
        ListNode *temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        left--; right--;

        while(left < right){
            swap(arr[left++], arr[right--]);
        }

        for(int val : arr)
            cout << val << " ";

        temp = head;

        reverse(arr.begin(), arr.end());

        while(!arr.empty()){
            temp->val = arr.back();
            temp = temp->next;
            arr.pop_back();
        }

        return head;
    }
};