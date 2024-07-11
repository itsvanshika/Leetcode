#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int, int>> jobs;
        
        for (int i = 0; i < n; ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        
        int ans = 0, max_profit = 0, i = 0;
        
        for (int ability : worker) {
            while (i < n && jobs[i].first <= ability) {
                max_profit = std::max(max_profit, jobs[i].second);
                ++i;
            }
            ans += max_profit;
        }
        
        return ans;
    }
};
