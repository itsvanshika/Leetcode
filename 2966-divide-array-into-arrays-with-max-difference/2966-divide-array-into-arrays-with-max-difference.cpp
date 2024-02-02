class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>result;
        sort(begin(nums),end(nums));
        int n = nums.size();
        for(int i=0;i<n;i=i+3){
            if(nums[i+2]-nums[i]>k){
                return {};
            }
            result.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return result;
    }
};