///
/// LeetCode 
/// By Reza Ebrahimi <reza.ebrahimi.dev@gmail.com>
///
/// Two Sum Problem
/// https://leetcode.com/problems/two-sum
///
/// Time Submitted | Status   | Runtime | Memory | Language
/// 2020/03/10     | Accepted | 40 ms 	| 2.9 MB | golang
///
/// Runtime: 40 ms, faster than 22.27% of Go online submissions for Two Sum.
/// Memory Usage: 2.9 MB, less than 100.00% of Go online submissions for Two Sum.
///

func twoSum(nums []int, target int) []int {
    for i := 0; i <= len(nums); i += 1 {
        for j := i + 1; j < len(nums); j += 1 {
            if nums[i] + nums[j] == target {
                twoSum := []int{i, j}
                return twoSum
            }
        }
    }
    return []int{}
}
