class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<char,int>mp;
        for(auto &it:word){
            mp[it]++;
        }
        vector<int>v;
        for(auto &p:mp){
            v.push_back(p.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        int co=0;
        for(auto &p:v){
            co++;
            if(co<=8){
                ans+=p*1;
            }
            else if(co<=16){
                ans+=p*2;
            }
            else if(co<=24){
                ans+=p*3;
            }
            else{
                ans+=p*4;
            }
        }
        return ans;
    }
};