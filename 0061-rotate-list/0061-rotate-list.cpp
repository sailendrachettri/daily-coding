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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head;
        vector<int> arr;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> rot(arr.size(), 0);

        for(int i = 0; i < arr.size(); i++){
            rot[(i+k)%arr.size()] = arr[i];
        }

        temp = head;
        reverse(rot.begin(), rot.end());
        while(!(rot.empty())){
            temp->val = rot.back();
            temp = temp->next;
            rot.pop_back();
        }

        return head;
    }
};