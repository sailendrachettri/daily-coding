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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a1, a2, ans;
        ListNode* temp = l1;
        int diff, size1, size2, carry;
        ListNode* dummy = new ListNode(0);

        while(temp){
            a1.push_back(temp->val);
            temp = temp->next;
        }

        temp = l2;

        while(temp){
            a2.push_back(temp->val);
            temp = temp->next;
        }

        size1 = a1.size();
        size2 = a2.size();
        diff = abs(size1-size2);

        if(a1.size() > a2.size()){
            for(int i = 0; i < diff; i++){
                a2.push_back(0);
            }
        }else{
            for(int i = 0; i < diff; i++){
                a1.push_back(0);
            }
        }

        carry = 0;
        for(int i = 0; i < a1.size(); i++){
            int sum = a1[i]+a2[i]+carry;
            ans.push_back(sum%10);
            sum = sum / 10;
            carry = sum;
            
        }

        temp = dummy;

        for(int i = 0; i < ans.size(); i++){
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }

        if(carry != 0){
            temp->next = new ListNode(carry);
        }

        return dummy->next;
    }
};