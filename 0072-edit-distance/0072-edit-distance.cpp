class Solution {
public:
    int dp[501][501];
    int solve(string word1, string word2, int i,int j){
        if(i<=-1 && j<=-1){
            return 0;
        }
        if(i<=-1){
            return j+1;
        }
        if(j<=-1){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]==word2[j]){
            return dp[i][j]= solve(word1,word2,i-1,j-1);
        }
        int rep = solve(word1,word2,i-1,j-1);
        int ins = solve(word1,word2,i,j-1);
        int del = solve(word1,word2,i-1,j);
        return dp[i][j] = 1+min(rep,min(ins,del));
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        int n1 = word1.length();
        int n2 = word2.length();
        return solve(word1,word2,n1-1,n2-1);
    }
};