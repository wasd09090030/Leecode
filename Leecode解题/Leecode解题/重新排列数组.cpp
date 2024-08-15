
/*����һ������ nums ���������� 2n ��Ԫ�أ��� [x1,x2,...,xn,y1,y2,...,yn] �ĸ�ʽ���С�

���㽫���鰴 [x1,y1,x2,y2,...,xn,yn] ��ʽ�������У��������ź�����顣

 

ʾ�� 1��

���룺nums = [2,5,1,3,4,7], n = 3
�����[2,3,5,4,1,7] 
���ͣ����� x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 �����Դ�Ϊ [2,3,5,4,1,7]*/







#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};