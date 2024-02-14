class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int>result(n);
        int r=0,s=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                result[i]=positive[r];
                r++;
            }
            else{
                result[i] = negative[s];
                s++;
            }
        }
        return result;
        
    }
};