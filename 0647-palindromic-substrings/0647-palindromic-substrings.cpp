class Solution {
public:
   
    int countSubstrings(string s) {
        int n =  s.length();
        int count=0;
        vector<vector<bool>>t(n,vector<bool>(n,false));
        for(int l=1;l<=n;l++){
            for(int i=0;l+i-1<n;i++){
                int j =  l+i-1;
                if(i==j){
                    t[i][j]=true;
                }
                else if(i+1==j){
                    t[i][j]=(s[i]==s[j]);
                }
                else{
                    t[i][j] = ((s[i]==s[j]) && t[i+1][j-1]);
                }
                if(t[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};