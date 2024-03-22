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
	    // step 1 - creation of temp variable and a stack
        stack<int> s;
        ListNode *temp = head;
		
        // step 2 - pusing value into the stack
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        
		
        temp = head; // reset temp 
		
		// step 4 - comparing the top value of the stack with temp value - in stack all the value is soted in reversed ordered
        while(temp != NULL)
        {
            if(s.top() != temp->val)
                return false;
            
            s.pop();
            temp = temp->next;
        }
        
        return true;
    }
};