/*给定由一些正数（代表长度）组成的数组 nums ，返回 由其中三个长度组成的、面积不为零的三角形的最大周长 。如果不能形成任何面积不为零的三角形，返回 0。

 

示例 1：

输入：nums = [2,1,2]
输出：5
解释：你可以用三个边长组成一个三角形:1 2 2。*/


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//解法：先排序，3个相邻的数一组，判断是否符合

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
            int size = nums.size();

            if (size < 3)
                return 0;


        sort(nums.begin(),nums.end());


        for (int i = size - 1; i >= 2; i--) {

            if (nums[i] < (nums[i - 1] + nums[i - 2]))
                return nums[i] + nums[i-1] + nums[i-2];
        }

        return 0;
    }
};