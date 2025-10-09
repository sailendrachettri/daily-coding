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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr, odd, even;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        bool flag = true;
        for(int val : arr){
            if(flag){
                odd.push_back(val);
            }else
                even.push_back(val);
            
            flag = !flag;
        }

        arr.clear();

        arr = odd;
        for(int val : even)
            arr.push_back(val);
        
        temp = head;

        reverse(arr.begin(), arr.end());

        while(temp){
            temp->val = arr.back();
            arr.pop_back();
            temp = temp->next;
        }

        return head;

    }
};