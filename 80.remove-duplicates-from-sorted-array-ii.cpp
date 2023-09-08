/*
 * @lc app=leetcode.cn id=80 lang=cpp
 * @lcpr version=21913
 *
 * [80] 删除有序数组中的重复项 II
 */

using namespace std;

#include <vector>

// @lc code=start
class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int slow = 1;
        for (int fast = 2; fast < nums.size(); fast++) {
            if (nums[slow - 1] != nums[fast]) {
                nums[++slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,1,1,2,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,1,1,1,1,2,3,3]\n
// @lcpr case=end

 */
