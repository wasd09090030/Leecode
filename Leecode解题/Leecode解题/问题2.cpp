//找出与数组相加的整数 II
/*给你两个整数数组 nums1 和 nums2。

从 nums1 中移除两个元素，并且所有其他元素都与变量 x 所表示的整数相加。如果 x 为负数，则表现为元素值的减少。

执行上述操作后，nums1 和 nums2 相等 。当两个数组中包含相同的整数，并且这些整数出现的频次相同时，两个数组 相等 。

返回能够实现数组相等的**** 最小 整数 x *****。

示例 1:
输入：nums1 = [4,20,16,12,8], nums2 = [14,18,10]
输出：-2
解释：
移除 nums1 中下标为 [0,4] 的两个元素，并且每个元素与 -2 相加后，nums1 变为 [18,14,10] ，与 nums2 相等。*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (int i : {2, 1, 0}) {
            int left = i + 1, right = 1;
            while (left < m && right < n) {
                if (nums1[left] - nums2[right] == nums1[i] - nums2[0]) {
                    ++right;
                }
                ++left;
            }
            if (right == n) {
                return nums2[0] - nums1[i];
            }
        }
        
        return 0;
    }
};

//力扣官方题解




int main() {

    vector<int> myVector1 = { 3,5,10,9,9,4 };
    vector<int> myVector2 = { 1,6,6,0 };

    Solution ss;
    int a = ss.minimumAddedInteger(myVector1, myVector2);


    if (a == -3) {
        cout << "clear";
    }

    return 0;
}











/*
//本人题解，纯暴力
class Solution {
public:
   int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
    int minAdd = INT_MAX;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    for (int i = 0; i < 3; ++i) {
        int diff = nums2[0] - nums1[i];
        if (isSubseq(nums1, nums2, diff)) {
            minAdd = min(minAdd, diff);
        }
    }

    return minAdd;
   }

   bool isSubseq(vector<int>& nums1, vector<int>& nums2, int diff) {
    int size = (int)nums1.size(), i = 0;

    for (int num : nums2) {
        while (i < size && num - nums1[i] != diff) {
            ++i;
        }

        if (i == size) {
            return false;
        }

        ++i;
    }

    return true;
   }
};

};*/