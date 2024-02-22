class Solution {
public:
    vector<string>ans;
    int n;
    void solve(string digits,int i,string temp,unordered_map<char,string>&mp){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        char ch = digits[i];
        string st=mp[ch];
        int m = st.length();
        for(int j=0;j<m;j++){
            temp.push_back(st[j]);
            solve(digits,i+1,temp,mp);
            temp.pop_back();
            }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        unordered_map<char,string>mp;
        n = digits.length();
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        solve(digits,0,"",mp);
        return ans;
    }
    
};