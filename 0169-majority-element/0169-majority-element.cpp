class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &n:nums){
            mp[n]++;
        }
        int n = nums.size();
        int m = n/2;
        for(auto &it:mp){
            int b = it.second;
            if(b>m){
                return it.first;
            }
        }
        return 0;
    }
};