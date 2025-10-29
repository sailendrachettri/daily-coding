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
    ListNode* partition(ListNode* head, int x) {
        vector<int> arr, less, great;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int val : arr){
            if(val < x){
                less.push_back(val);
            }else{
                great.push_back(val);
            }
        }

        temp = head;

        for(int i = 0; i < less.size(); i++){
            temp->val = less[i];
            temp = temp->next;
        }

        for(int i = 0; i < great.size(); i++){
            temp->val = great[i];
            temp = temp->next;
        }

        return head;
    }
};