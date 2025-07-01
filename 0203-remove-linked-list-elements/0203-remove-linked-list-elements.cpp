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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> arr;

        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);

        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 0; i < arr.size();){
            if(arr[i] == val){
                arr.erase(arr.begin()+i);

                if(i > 0)
                    i--;
            }else {
                i++;
            }
        }

        reverse(arr.begin(), arr.end());

        temp = dummy;

        while(arr.size() > 0){
            temp->next = new ListNode(arr.back());
            temp = temp->next;
            arr.pop_back();
        }

        return dummy->next;

    }
};