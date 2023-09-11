// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=16 lang=cpp
 * @lcpr version=21913
 *
 * [16] 最接近的三数之和
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // 1. sort the array
        sort(nums.begin(), nums.end());
        int closest=nums[0]+nums[1]+nums[2];

        for (int i = 0;i<nums.size()-2;i++){
            int left = i + 1;
            int right=nums.size()-1;
            
            
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if (abs(sum-target)<abs(closest-target)){
                    closest = sum;
                }
                if (sum>target){
                    right--;    
                }else if (sum<target){
                    left++;
                }else{
                    return sum;
                }
            }
        }
        return closest;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,1,1,0]\n-100\n
// @lcpr case=end

// @lcpr case=start
// [0,0,0]\n1\n
// @lcpr case=end

 */

