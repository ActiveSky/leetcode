/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

#include <string>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while (columnNumber > 0) {
            columnNumber--;
            res += columnNumber % 26 + 'A';
            columnNumber /= 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

