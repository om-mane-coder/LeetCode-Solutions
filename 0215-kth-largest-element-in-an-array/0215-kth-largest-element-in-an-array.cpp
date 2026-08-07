class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>pq;

        for(int num : nums)
        {
            pq.push(num);
        }
         int x;
         int n = nums.size();
         
        while(k--)
        {
            x = pq.top();
            pq.pop();
        }

        return x;
        
    }
};