class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &num : nums) {
            mp[num]++;
        }
        int result = INT_MIN;
        for(int &num : nums) {
            if(mp.find(num) != mp.end() && mp.find(-num) != mp.end()) {
                result = max(result, abs(num));
            }
        }
        return result == INT_MIN ? -1 : result;
    }
};
