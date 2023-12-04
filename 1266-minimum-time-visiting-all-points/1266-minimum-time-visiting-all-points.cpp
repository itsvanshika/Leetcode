class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        int n = points.size();
        int x1,y1,x2,y2;
        for(int i=0;i<n-1;i++){
            x1 = points[i][0];
            y1 = points[i][1];
            x2 = points[i+1][0];
            y2 = points[i+1][1];
            int dx = abs(x2-x1);
            int dy = abs(y2-y1);
            ans += min(dx,dy) + abs(dy-dx);}
        return ans;
    }
};