//�ҳ���������ӵ�����

/*��������������ȵ����� nums1 �� nums2��
���� nums1 �е�ÿ��Ԫ�ض������ x ����ʾ��������ӡ���� x Ϊ�����������ΪԪ��ֵ�ļ��١�
���� x ��Ӻ�nums1 �� nums2 ��� �������������а�����ͬ��������������Щ�������ֵ�Ƶ����ͬʱ���������� ��� ��
�������� x ��

ʾ�� 1:
���룺nums1 = [2,6,4], nums2 = [9,7,5]
�����3

ʾ�� 2:

���룺nums1 = [10], nums2 = [5]

�����-5

��*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        int v1 = *min_element(nums1.begin(), nums1.end());
        int v2 = *min_element(nums2.begin(), nums2.end());

        return v2 - v1;

        //���Լ�
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