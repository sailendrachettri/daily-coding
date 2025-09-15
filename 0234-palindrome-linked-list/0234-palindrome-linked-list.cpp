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
        vector<int> arr2;
        ListNode* temp = head;


        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        arr2  = arr;

        reverse(arr2.begin(), arr2.end());

        return arr == arr2;

        
    }
};