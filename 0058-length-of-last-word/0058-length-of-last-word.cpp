class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.find_last_not_of(' ')+1;
        s.erase(idx);
        int a = s.find_last_of(' ');
        int ans = (a==string::npos?s.length():s.length()-a-1);
        return ans;
    }
};