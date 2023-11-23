class Solution {
public:
    bool check(int s,int e,vector<int>& nums){
        int n=nums.size();
        int co=0;
        vector<int> temp;
        for(int i=s;i<=e;i++){
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int k=temp[1]-temp[0];
        int g = temp.size();
        for(int i=1;i<g;i++){
            if((temp[i]-temp[i-1])!=k){
                return false;
            }
            
            
        }
        return true;
        
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int size1 = l.size();
        int size2 = r.size();
        vector<bool> ans;
        for(int i=0;i<size1;i++){
            int s_index = l[i];
            int e_index = r[i];
            ans.push_back(check(s_index,e_index,nums));
        }
        return ans;
    }
};