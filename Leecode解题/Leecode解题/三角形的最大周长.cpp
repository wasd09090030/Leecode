/*������һЩ�����������ȣ���ɵ����� nums ������ ����������������ɵġ������Ϊ��������ε�����ܳ� ����������γ��κ������Ϊ��������Σ����� 0��

 

ʾ�� 1��

���룺nums = [2,1,2]
�����5
���ͣ�������������߳����һ��������:1 2 2��*/


#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//�ⷨ��������3�����ڵ���һ�飬�ж��Ƿ����

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