//�ҳ���������ӵ����� II
/*���������������� nums1 �� nums2��

�� nums1 ���Ƴ�����Ԫ�أ�������������Ԫ�ض������ x ����ʾ��������ӡ���� x Ϊ�����������ΪԪ��ֵ�ļ��١�

ִ������������nums1 �� nums2 ��� �������������а�����ͬ��������������Щ�������ֵ�Ƶ����ͬʱ���������� ��� ��

�����ܹ�ʵ��������ȵ�**** ��С ���� x *****��

ʾ�� 1:
���룺nums1 = [4,20,16,12,8], nums2 = [14,18,10]
�����-2
���ͣ�
�Ƴ� nums1 ���±�Ϊ [0,4] ������Ԫ�أ�����ÿ��Ԫ���� -2 ��Ӻ�nums1 ��Ϊ [18,14,10] ���� nums2 ��ȡ�*/

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

//���۹ٷ����




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
//������⣬������
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