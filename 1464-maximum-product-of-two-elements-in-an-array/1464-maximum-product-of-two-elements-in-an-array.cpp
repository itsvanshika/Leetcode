class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int a,maxel=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                a = (nums[i]-1)*(nums[j]-1);
                maxel = max(maxel,a);
            }
        }
        return maxel;
    }
};