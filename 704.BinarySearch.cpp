///
/// LeetCode 
/// By Reza Ebrahimi <reza.ebrahimi.dev@gmail.com>
///
/// Binary Search Problem
/// https://leetcode.com/problems/binary-search
///
/// Runtime: 40 ms, faster than 39.64% of C++ online submissions for Binary Search.
/// Memory Usage: 32 MB, less than 5.31% of C++ online submissions for Binary Search.
/// Time Submitted: 06/22/2021 00:07
///

    int search(vector<int>& nums, int target) {
        return binary_search_ex(move(nums), target, 0);
    }
    
    int binary_search_ex(vector<int> &&nums, int target, int offset) {
        int ret = -1;
        int len = nums.size();
        int mid = len / 2;

        sort(nums.begin(), nums.end());

        if (len <= 0) {
            return -1;
        } else if (len == 1 && target == nums[mid]) {
            return mid + offset;
        } else if (len == 1 && target != nums[mid]) {
            return -1;
        }

        if (target < nums[mid]) {
            std::vector<int> vec(nums.begin(), nums.begin() + mid);
            ret = binary_search_ex(move(vec), target, 0);
        } else if (target > nums[mid]) {
            std::vector<int> vec(nums.begin() + mid, nums.end());
            ret = binary_search_ex(move(vec), target, mid);
        } else {
            return mid + offset;
        }

        len = len - mid;
        mid = len / 2;

        if (mid == 0 && target == nums[mid]) {
            return mid + offset;
        }

        if (ret == -1) {
            return ret;
        }

        return ret + offset;
    }    
