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
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        for(auto curr = head; curr; curr = curr->next)
        nums.push_back(curr->val);

        sort(nums.begin(),nums.end());

        auto curr = head;
        for(auto it = nums.begin(); it!= nums.end();it++)
        {
            curr->val = *it;
            curr = curr->next;
        
        }
        return head;
    }
};