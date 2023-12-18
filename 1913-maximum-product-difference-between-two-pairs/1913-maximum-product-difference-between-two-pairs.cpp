class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        /*int max_el=0;
        int secmax_el=0;
        int min_el=0;
        int secmin_el=0;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++){
            if(nums[i]>=nums[max_el]){
                max_el= i;
            }
            
        }
        int a = nums[max_el];
        nums[max_el]=-1;
        for(i=0;i<n;i++){
            if(nums[i]>=nums[secmax_el]){
                secmax_el= i;
            }
            
        }
        int b = nums[secmax_el];
        for(i=0;i<n;i++){
            if(nums[i]<=nums[min_el] && nums[i]>=0){
                min_el= i;
            }
            
        }
        int c = nums[min_el];
        nums[min_el]=-1;
        for(i=0;i<n;i++){
            if(nums[i]<=nums[secmin_el] && nums[i]>=0){
                secmin_el= i;
            }
            
        }
        int d = nums[secmin_el];*/
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int a = nums[n-1];
        int b = nums[n-2];
        int c = nums[0];
        int d = nums[1];
        int ans = (a*b)-(c*d);
        return ans;
        
        
    }
};