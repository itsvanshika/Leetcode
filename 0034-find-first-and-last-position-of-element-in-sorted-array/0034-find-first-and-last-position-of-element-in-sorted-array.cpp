class Solution {
public:
    int find_first_position(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int result = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                result = mid; 
                r = mid-1;     
            } else if(nums[mid] > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }
    
    int find_last_position(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int result = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target) {
                result = mid;
                l = mid+1;  
            } else if(nums[mid] > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l = find_first_position(nums, target);
        int r = find_last_position(nums, target);
        
        return {l, r};
    }
};

