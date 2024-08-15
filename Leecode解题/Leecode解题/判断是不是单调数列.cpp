#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int size = nums.size();
        int num = 0, num2 = 0;

        if (size <= 2)  return true;

        for (int i = 0; i < size - 1; i++) {

            if (nums[i] < nums[i + 1])
                num = 1;
            if (nums[i] > nums[i + 1])
                num2 = 1;


        }

        //单调数列不会出现两种情况；

        if (num + num2 == 2)
            return false;
        else
            return true;



    }
};
