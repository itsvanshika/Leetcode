#include <cmath>
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>pq;
        for(int &num:nums){
            pq.push(num);
        }
        long long ans=0;
        while(k>0){
            int a = pq.top();
            ans+= a;
            pq.pop();
            pq.push(ceil(a/3.0));
            k--;
        }
        return ans;
    }
};