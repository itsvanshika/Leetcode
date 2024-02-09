class Solution {
public:
    std::vector<int> largestDivisibleSubset(std::vector<int>& nums) {
        // Sort the input array
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        // Arrays to store the length of the divisible subset and previous indices
        std::vector<int> a(n, 1), prev(n, -1);
        int max_len = 0, max_index = -1;

        // Dynamic programming to find the length of the largest divisible subset
        for (int i = 0; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (nums[i] % nums[j] == 0 && a[j] + 1 > a[i]) {
                    // Update the subset length and previous index
                    a[i] = a[j] + 1;
                    prev[i] = j;
                }
            }

            // Update the maximum length and its corresponding index
            if (a[i] > max_len) {
                max_len = a[i];
                max_index = i;
            }
        }

        // Reconstruct the largest divisible subset
        std::vector<int> result;
        while (max_index != -1) {
            result.push_back(nums[max_index]);
            max_index = prev[max_index];
        }

        // Reverse the result to get the correct order
        std::reverse(result.begin(), result.end());
        return result;
    }
};