class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq=0;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            maxfreq=max(maxfreq,mp[nums[i]]);
        }
        int ans=0;
        for(auto&it:mp){
            if(it.second==maxfreq){
                ans=ans+maxfreq;
            }
        }
        return ans;
    }
};