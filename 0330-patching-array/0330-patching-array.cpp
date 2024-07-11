class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
       
        int patch=0;
        long maxpatch=0;
        int i=0;
        while(maxpatch<n){
            if(i < nums.size() && nums[i] <= maxpatch + 1){
                maxpatch+=nums[i];
                i++;
            }
            else{
                maxpatch+=(maxpatch+1);
                patch++;
            }
        }
        return patch;
    }
};