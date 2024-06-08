class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int ans=0;
        for(int i=0;i<n-1;i++){
            int a = int(s[i]);
            int b = int(s[i+1]);
            int diff = abs(a-b);
            ans+=diff;
        }
        return ans;
    }
};