class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int x=0;x<=n;x++){
            int idx = lower_bound(begin(nums),end(nums),x)-begin(nums);
            int count= n-idx;
            if(count==x){
                return x;
            }
        }
        return -1;
        }
};