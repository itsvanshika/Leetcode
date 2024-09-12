class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(char &c:allowed){
            mp[c]=1;
        }
        int ans=0;
        for(auto &s:words){
            int f=1;
            for(char &c:s){
                if(mp[c]==0){
                    f=0;
                    break;
                }
            }
            if(f==1){
                ans+=1;
            }
        }
        return ans;
    }
};