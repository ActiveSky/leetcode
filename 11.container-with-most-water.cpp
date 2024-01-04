// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=11 lang=cpp
 * @lcpr version=21913
 *
 * [11] 盛最多水的容器
 */

using namespace std;

#include <vector>
#include<algorithm>

// @lc code=start
class Solution {
   public:
    int maxArea(vector<int>& height) {
        // left from left boundry of the array and right from the other boundry
        int left = 0;
        int right = height.size() - 1;
        // initialize the maxArea with 0
        int maxArea = 0;
        while(right > left){
            // get the area
            int area = min(height[left], height[right]) * (right - left);
            // update the maxArea
            maxArea = max(maxArea, area);
            // if the height of the left boundry is smaller than the right boundry
            if(height[left] < height[right]){
                // move the left boundry to the right
                ++left;
            }else{
                // move the right boundry to the left
                --right;
            }
        }   
        return maxArea;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,6,2,5,4,8,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,1]\n
// @lcpr case=end

 */
