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

        if(head == nullptr || head->next == nullptr || k == 0)
         return head;


         int n = 1;
         ListNode* last = head;


         while(last->next != nullptr)
         {
            n++;
            last = last->next;
         }

         k = k%n;

         while(k--)
         {
            ListNode* prev = head;
            //Find node before the last

            while(prev->next != last)
            {
                prev = prev->next;
            }

            prev->next = nullptr;
            last->next = head;
            head = last;

            last = prev;
           
         }

         return head;
        
    }
};