class Solution {
public:
void update(int number,vector<int>&vec,int a){
    for(int i=0;i<32;i++){
        if(((number>>i)&1)!=0){
            vec[i]+=a;
        }
    }
}
int getdecimal(vector<int>&vec){
    int res=0;
    for(int i=0;i<32;i++){
        if(vec[i]>0){
            res = res|(1<<i);
        }
    }
    return res;
}
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int j=0;
        int result = INT_MAX;
        vector<int>vec(32,0);
        while(j<n){
            update(nums[j],vec,1);
            while(i<=j && getdecimal(vec)>=k){
                result = min(result,j-i+1);
                update(nums[i],vec,-1);
                i++;
            }
            
            j++;
        }
        return (result == INT_MAX) ? -1 : result;
    }
};