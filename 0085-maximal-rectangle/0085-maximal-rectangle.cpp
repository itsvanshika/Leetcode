class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st1;
        stack<int>st2;
        vector<int>NSE(n);
        vector<int>PSE(n);
        for(int i=0;i<n;i++){
            while(!st1.empty() && heights[i]<heights[st1.top()]){
                NSE[st1.top()]=i;
                st1.pop();
            }
            st1.push(i);
        }
        while(!st1.empty()){
            NSE[st1.top()]=n;
            st1.pop();
        }
        for(int i=0;i<n;i++){
            cout<<NSE[i]<<endl;
        }
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && heights[i]<heights[st2.top()]){
                PSE[st2.top()]=i;
                st2.pop();
            }
            st2.push(i);
        }
        while(!st2.empty()){
            PSE[st2.top()]=-1;
            st2.pop();
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int a = (NSE[i]-PSE[i]-1)*heights[i];
            ans = max(ans,a);
        }
        
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>histogram(m,0);
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    histogram[j]++;
                }
                else{
                    histogram[j]=0;
                }
            }
            maxi = max(maxi,largestRectangleArea(histogram));
        }
        return maxi;

    }
};