class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        long long n = nums.size();

        priority_queue<long long>pq;

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n ;j++)
            {
                 long long g = gcd(nums[i],nums[j]);
                   long long x = (1LL*nums[i]*nums[j])/(g*g);
                    pq.push(x);
            }
        }

        return pq.top();
            

        
    }
};