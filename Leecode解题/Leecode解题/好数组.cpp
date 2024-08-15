/*给你一个整数数组 nums 。

如果一组数字 (i,j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。

返回好数对的数目。

 

示例 1：

输入：nums = [1,2,3,1,1,3]
输出：4
解释：有 4 组好数对，分别是 (0,3), (0,4), (3,4), (2,5) ，下标从 0 开始*/

//解法一：暴力双循环
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i < nums.size() - 1; i++) {

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j])
                    x += 1;
            }

        }
        return x;

    }
};


//解法二：
//你可以理解为 可以看出当数组里的数据全部相同数据的时候，结果=n*(n-1)/2. 
// 所以解题思路很简单了，就是统计数组nums中相同数字出现的次数n，然后把所有的n*(n-1)/2加起来就可以了。
// 比如数组nums = [1,2,3,1,1,3]，1出现的次数为n=3，2出现的次数为n=1，3出现的次数为n=2，所以总的结果就是：

//result = 3 * (3 - 1) / 2 + 1 * (1 - 1) / 2 + 2 * (2 - 1) / 2 = 3 + 0 + 1 = 4
class Solution02 {
public :
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101];
        int ans = 0;
        //统计次数
        for (int x : nums) cnt[x]++;
        //求和
        for (int n : cnt)  ans += (n - 1) * n / 2;
        return ans;
    }
};