///
/// LeetCode 
/// By Reza Ebrahimi <reza.ebrahimi.dev@gmail.com>
///
/// Two Sum Problem
/// https://leetcode.com/problems/two-sum
///
/// Time Submitted | Status   | Runtime | Memory | Language
/// 2020/03/10     | Accepted | 28 ms 	| 2 MB   | rust
///
/// Runtime: 28 ms, faster than 36.02% of Rust online submissions for Two Sum.
/// Memory Usage: 2 MB, less than 100.00% of Rust online submissions for Two Sum.
///

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        for i in (0..nums.len()) {
            for j in (i+1..nums.len()) {
                if nums[i] + nums[j] == target {
                    let twoSum = vec![i as i32, j as i32];
                    return twoSum;
                }
            }            
        }
        return vec![]
    }
}
