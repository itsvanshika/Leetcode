
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int remainder = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;  // Initialize to handle subarrays starting from index 0
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            remainder = ((sum % k) + k) % k;  // Handle negative remainders
            
            if (mp.find(remainder) != mp.end()) {
                ans += mp[remainder];
            }
            
            mp[remainder]++;
        }
        
        return ans;
    }
};
