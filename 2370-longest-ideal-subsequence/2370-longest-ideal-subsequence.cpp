class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.length();
        vector<int>t(26,0);
        int result = 0;
        for(int i=0;i<n;i++){
            int curr = s[i]-'a';
            int left = max(0,curr-k);
            int right = min(25,curr+k);
            int largest=0;
            for(int j=left;j<=right;j++){
                largest = max(largest,t[j]);
            }
            t[curr] = max(t[curr],largest+1);
            result = max(result,t[curr]);
            }
        return result;
    }
};