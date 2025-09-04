/* Leetcode Problem 1: Two-Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]   */

// Solution
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size();i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == target - nums[j]){
                    return {i,j};
                }
            }
        }
        return{};
    }
};


/*Leetcode Problem 217
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true

 
*/ 

//Solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int j = 0;
        int count = 0, n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++){
            int key = nums[j];
            if (nums[i] == key){
                count++;
                if(count > 1){
                    return true;
                }
            }else{
                j = i;
                count = 1;
            }
        }
        return false;
    }
};