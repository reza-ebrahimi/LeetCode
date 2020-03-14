///
/// LeetCode 
/// By Reza Ebrahimi <reza.ebrahimi.dev@gmail.com>
///
/// Add Two Numbers Problem
/// https://leetcode.com/problems/add-two-numbers
///
/// Time Submitted | Status   | Runtime | Memory | Language
/// 2020/03/11     | Accepted | 20 ms	| 11.1 MB| cpp
///
/// Runtime: 20 ms, faster than 98.04% of C++ online submissions for Add Two Numbers.
/// Memory Usage: 11.1 MB, less than 5.14% of C++ online submissions for Add Two Numbers.
///



/*
Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
*/

#include <iostream>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *main_node = new ListNode(0);
        ListNode *node = main_node;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr) {
            int val1 = l1 != nullptr ? l1->val : 0;
            int val2 = l2 != nullptr ? l2->val : 0;
            
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            
            node->next = new ListNode(sum % 10);
            node = node->next;
            
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;         
        }
        node->next = carry ? new ListNode(carry) : nullptr;
        return main_node->next;
    }
};
