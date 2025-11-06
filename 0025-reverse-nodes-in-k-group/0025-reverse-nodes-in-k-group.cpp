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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        ListNode* temp = head;
        int right = 0;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0, j = 0;
        while(right < arr.size()){
           
           i = right;
           j = (right + k)-1;

            if(right < arr.size()-k+1){
                while(i < j){
                    swap(arr[i++], arr[j--]);
                }
            }
            right = right+k;
        }

        temp = head;
        

        for(int i = 0; i < arr.size(); i++){
            temp->val = arr[i];
            temp = temp->next;
        }

        return head;
    }
};