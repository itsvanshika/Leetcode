class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n);
        dp[0]=1;
        int p1=0;
        int p2=0;
        int p3=0;
        for(int i=1;i<n;i++){
            int two_multiple = dp[p1]*2;
            int three_multiple = dp[p2]*3;
            int five_multiple = dp[p3]*5;
            dp[i] = min(two_multiple,min(three_multiple,five_multiple));
            if(dp[i]==two_multiple){
                p1++;
            }
            if(dp[i]==three_multiple){
                p2++;
            }
            if(dp[i]==five_multiple){
                p3++;
            }
        }
        return dp[n-1];
    }
};