class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
       sort(begin(intervals),end(intervals));
        priority_queue<int,vector<int>,greater<int>>pq;
        for(vector<int>&interval:intervals){
            int arrival = interval[0];
            int depart = interval[1];
            if(!pq.empty() && arrival > pq.top()){
                pq.pop();
            }
            pq.push(depart);
        }
        return pq.size();
    }
};