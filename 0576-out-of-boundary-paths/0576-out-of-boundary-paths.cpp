class Solution {
public:
    int M,N;
    int mod = 1e9+7;
    int t[51][51][51];
    vector<vector<int>>directions{{0,1},{0,-1},{1,0},{-1,0}};
    int solve(int startRow,int startColumn,int maxMove){
        if(startRow<0 || startRow>=M || startColumn<0 || startColumn>=N){
            return 1;
        }
        if(maxMove<=0){
            return 0;
        }
        if(t[startRow][startColumn][maxMove]!=-1){
            return t[startRow][startColumn][maxMove];
        }
        int result = 0;
        for(vector<int>&dir:directions){
           int new_row = startRow+dir[0];
            int new_col = startColumn + dir[1];
            result=(result + solve(new_row,new_col,maxMove-1))%mod;
        }
        return t[startRow][startColumn][maxMove]=result;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        M = m;
        N = n;
        memset(t,-1,sizeof(t));
        return solve(startRow,startColumn,maxMove);
    }
};