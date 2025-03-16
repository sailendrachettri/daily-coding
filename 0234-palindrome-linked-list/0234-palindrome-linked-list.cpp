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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        vector<int> rev;

        ListNode*temp = head;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        rev = arr;
        reverse(begin(arr), end(arr));

        return rev == arr;
    }
};