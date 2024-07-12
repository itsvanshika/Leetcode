#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    typedef pair<int, int> p;
    
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int maxlength = 0;
        priority_queue<p, vector<p>> maxpq;
        priority_queue<p, vector<p>, greater<p>> minpq;
        int i = 0;
        int j = 0;
        
        while (j < n) {
            maxpq.push({nums[j], j});
            minpq.push({nums[j], j});
            
            while (maxpq.top().first - minpq.top().first > limit) {
                i = min(maxpq.top().second, minpq.top().second) + 1;
                while (!maxpq.empty() && maxpq.top().second < i) {
                    maxpq.pop();
                }
                while (!minpq.empty() && minpq.top().second < i) {
                    minpq.pop();
                }
            }
            
            maxlength = max(maxlength, j - i + 1);
            ++j;
        }
        
        return maxlength;
    }
};
