class Solution {
public:
    int n;
    int t[50001];
    int getnextindex(vector<vector<int>>&array,int l,int end){
        int r = n-1;
        int result=n+1;
        while(l<=r){
            int mid=  l+(r-l)/2;
            if(array[mid][0]>=end){
                result=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return result;
    }
    int solve(vector<vector<int>>& array,int i){
        if(i>=n){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int next = getnextindex(array,i+1,array[i][1]);
        int taken  = array[i][2]+solve(array,next);
        int nottaken = solve(array,i+1);
        return t[i]=max(taken,nottaken);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
      memset(t,-1,sizeof(t));
      n = startTime.size();
      vector<vector<int>> array(n,vector<int>(3,0));
      for(int i=0;i<n;i++){
          array[i][0]=startTime[i];
          array[i][1]=endTime[i];
          array[i][2]=profit[i];
      }
        sort(array.begin(),array.end());
        return solve(array,0);
    }
};