class Solution {
public:
    int rev(int num){
        int remainder,ans=0;
        while(num!=0){
           remainder = num%10;
           ans = (ans*10)+remainder;
            num = num/10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int M = 1e9+7;
        int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        int result=0;
        for(int i=0;i<n;i++){
            result=(result+mp[nums[i]])%M;
            mp[nums[i]]++;
        }
        return result;
    }
};