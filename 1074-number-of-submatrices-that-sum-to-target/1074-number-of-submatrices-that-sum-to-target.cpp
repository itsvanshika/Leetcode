class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=1;j<col;j++){
                matrix[i][j]=matrix[i][j]+matrix[i][j-1];
            }
        }
        int result=0;
        for(int i=0;i<col;i++){
           for(int j=i;j<col;j++){
               unordered_map<int,int>mp;
               mp[0]=1;
               int currsum=0;
               for(int k=0;k<row;k++){
                   currsum+=matrix[k][j]-(i>0?matrix[k][i-1]:0);
                   if(mp.find(currsum-target)!=mp.end()){
                       result+=mp[currsum-target];
                   }
                   mp[currsum]++;
               }
           } 
        }
        return result;
    }
};