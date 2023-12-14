class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> rowOnes(m,0);
        vector<int> colOnes(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    rowOnes[i]++;
                    colOnes[j]++;
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    if(rowOnes[i]+colOnes[j]==2){
                        ans++;
                    }
                }
               
            }
            
        }
        return ans;
    }
};