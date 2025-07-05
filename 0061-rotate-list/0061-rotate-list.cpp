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
        ListNode* temp = head;
        vector<int> arr;

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int size = arr.size();
        vector<int> ans(arr.size(), 0);


        for(int i = 0; i < arr.size(); i++){
            ans[(i+k)%size] = arr[i];
        }

        reverse(begin(ans), end(ans));

        while(ans.size() > 0){
            temp->val = ans.back();
            ans.pop_back();
            temp = temp->next;
        }

        temp = head;
        
        return temp;
    }
};