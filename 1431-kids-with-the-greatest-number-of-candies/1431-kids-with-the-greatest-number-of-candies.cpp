class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> ans;
        int max_elt = candies[0];
        for(int i=1;i<n;i++){
            max_elt = max(max_elt,candies[i]);
        }
        
        int a;
       
        for(int i=0;i<n;i++){
            a=candies[i]+extraCandies;
            if(a>=max_elt){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};