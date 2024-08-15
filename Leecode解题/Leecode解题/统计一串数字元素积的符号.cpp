/*��֪���� signFunc(x) ������� x �����������ض�ֵ��

��� x ������������ 1 ��
��� x �Ǹ��������� -1 ��
��� x �ǵ��� 0 ������ 0 ��
����һ���������� nums ���� product Ϊ���� nums ������Ԫ��ֵ�ĳ˻���

���� signFunc(product) ��

 

ʾ�� 1��

���룺nums = [-1,-2,-3,-4,3,2,1]
�����1
���ͣ�����������ֵ�ĳ˻��� 144 ���� signFunc(144) = 1*/

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