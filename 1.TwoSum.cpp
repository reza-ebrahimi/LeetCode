///
/// LeetCode 
/// By Reza Ebrahimi <reza.ebrahimi.dev@gmail.com>
///
/// 3. Two Sum
/// https://leetcode.com/problems/two-sum
///
/// Time Submitted | Status   | Runtime | Memory | Language
/// 2020/03/10     | Accepted | 132 ms	| 8.7 MB | cpp
///
/// Runtime: 132 ms, faster than 34.54% of C++ online submissions for Two Sum.
/// Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Two Sum.
///

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    vector<int> twoSum = {i, j};
                    return twoSum;
                }
            }
        }
        return vector<int>();
    }
};
