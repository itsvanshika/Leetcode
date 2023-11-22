class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int diagonal,max_key=0;
        unordered_map<int,vector<int>> mapp;
        for(int row=0;row<nums.size();row++){
            for(int col=0;col<nums[row].size();col++){
                diagonal = row+col;
                mapp[diagonal].push_back(nums[row][col]);
                max_key=max(diagonal,max_key);
            }
        }
        
        vector<int> answer;
        for(int i=0;i<=max_key;i++){
            for(auto x=mapp[i].rbegin();x<mapp[i].rend();++x){
                
                answer.push_back(*x);
            }
        }
        return answer;
    }
};