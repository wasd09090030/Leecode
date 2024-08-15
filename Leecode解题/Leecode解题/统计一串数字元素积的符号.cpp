/*已知函数 signFunc(x) 将会根据 x 的正负返回特定值：

如果 x 是正数，返回 1 。
如果 x 是负数，返回 -1 。
如果 x 是等于 0 ，返回 0 。
给你一个整数数组 nums 。令 product 为数组 nums 中所有元素值的乘积。

返回 signFunc(product) 。

 

示例 1：

输入：nums = [-1,-2,-3,-4,3,2,1]
输出：1
解释：数组中所有值的乘积是 144 ，且 signFunc(144) = 1*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
            int i = 1;
        for (int num : nums) {
            if (num == 0)
            {
                i = 0;
                break;
            }
            else if (num < 0)
                i = -i;
        }

        return i;

    }
};