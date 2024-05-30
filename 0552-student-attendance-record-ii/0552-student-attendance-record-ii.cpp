class Solution {
public:
    int mod = 1e9+7;
    int t[100001][2][3];
    int solve(int n,int absent,int late){
        if(absent>=2 || late>=3){
            return 0;
        }
        if(n==0){
            return 1;
        }
        if(t[n][absent][late]!=-1){
            return t[n][absent][late];
        }
        int l = solve(n-1,absent,late+1) %mod;
        int a = solve(n-1,absent+1,0)%mod;
        int p = solve(n-1,absent,0)%mod;
        return t[n][absent][late] = ((l+a)%mod +p)%mod;
    }
    int checkRecord(int n) {
        memset(t,-1,sizeof(t));
        return solve(n,0,0);
    }
};