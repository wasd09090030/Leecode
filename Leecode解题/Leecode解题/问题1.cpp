//找出与数组相加的整数

/*给你两个长度相等的数组 nums1 和 nums2。
数组 nums1 中的每个元素都与变量 x 所表示的整数相加。如果 x 为负数，则表现为元素值的减少。
在与 x 相加后，nums1 和 nums2 相等 。当两个数组中包含相同的整数，并且这些整数出现的频次相同时，两个数组 相等 。
返回整数 x 。

示例 1:
输入：nums1 = [2,6,4], nums2 = [9,7,5]
输出：3

示例 2:

输入：nums1 = [10], nums2 = [5]

输出：-5

：*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        int v1 = *min_element(nums1.begin(), nums1.end());
        int v2 = *min_element(nums2.begin(), nums2.end());

        return v2 - v1;

        //可以简化
        //return *min_element(nums2.begin(), nums2.end())- *min_element(nums1.begin(), nums1.end());
    }
};



int main() {

    vector<int> myVector1 = {3,7,4};
    vector<int> myVector2 = {5,6,9};
    
    Solution ss;
    int a=ss.addedInteger(myVector1,myVector2);


    if (a == 2) {
        cout << "clear";
    }

    return 0;
}