typedef long long ll;
class Solution {
public:
    long long wonderfulSubstrings(string word) {
       unordered_map<ll,ll>mp;
        ll result=0;
        int cum_xor=0;
        mp[0]=1;
        for(char &ch:word){
            int shift = ch-'a';
            cum_xor^=(1<<shift);
            result+=mp[cum_xor];
            for(char ch1='a';ch1<='j';ch1++){
                int shift1 = ch1-'a';
                ll check_xor = cum_xor ^ (1<<shift1);
                result+=mp[check_xor];
            }
            mp[cum_xor]++;
        }
        return result;
    }
};