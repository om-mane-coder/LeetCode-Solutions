class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        int n = nums.size();

        priority_queue<int>pq;

        for(int num : nums)
        {
            pq.push(num);
        }

        int p = n - k;
        int x;

        while( k--)
        {
            x = pq.top();
            pq.pop();
        }

        return x;
        
    }
};