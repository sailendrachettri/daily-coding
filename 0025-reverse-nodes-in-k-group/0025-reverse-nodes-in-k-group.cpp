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
        vector<int> arr, temparr, ans;
        ListNode* temp = head;
        int right = 0, size = 0;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        size = arr.size()-1;

        cout << arr.size() << endl;

        while(right <= size){
            int times = k;

            while(right <= size && times--){
                cout << arr[right] << " ";
                temparr.push_back(arr[right++]);
            }

            // for(int val : temparr){
            //     cout << val << " ";
            // }

            if(temparr.size() == k){
                int i = 0, j = temparr.size()-1;

                while(i < j){
                    swap(temparr[i++], temparr[j--]);
                }
            }

            for(int i = 0; i < temparr.size(); i++){
                // cout << temparr[i] << " ";
                ans.push_back(temparr[i]);
            }

            temparr.clear();
        }

        temp = head;
        

        for(int i = 0; i < ans.size(); i++){
            // cout << ans[i] << " ";
            temp->val = ans[i];
            temp = temp->next;
        }

        return head;
    }
};