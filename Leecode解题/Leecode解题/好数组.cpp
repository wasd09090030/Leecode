/*����һ���������� nums ��

���һ������ (i,j) ���� nums[i] == nums[j] �� i < j ���Ϳ�����Ϊ����һ�� ������ ��

���غ����Ե���Ŀ��

 

ʾ�� 1��

���룺nums = [1,2,3,1,1,3]
�����4
���ͣ��� 4 ������ԣ��ֱ��� (0,3), (0,4), (3,4), (2,5) ���±�� 0 ��ʼ*/

//�ⷨһ������˫ѭ��
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


//�ⷨ����
//��������Ϊ ���Կ����������������ȫ����ͬ���ݵ�ʱ�򣬽��=n*(n-1)/2. 
// ���Խ���˼·�ܼ��ˣ�����ͳ������nums����ͬ���ֳ��ֵĴ���n��Ȼ������е�n*(n-1)/2�������Ϳ����ˡ�
// ��������nums = [1,2,3,1,1,3]��1���ֵĴ���Ϊn=3��2���ֵĴ���Ϊn=1��3���ֵĴ���Ϊn=2�������ܵĽ�����ǣ�

//result = 3 * (3 - 1) / 2 + 1 * (1 - 1) / 2 + 2 * (2 - 1) / 2 = 3 + 0 + 1 = 4
class Solution02 {
public :
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101];
        int ans = 0;
        //ͳ�ƴ���
        for (int x : nums) cnt[x]++;
        //���
        for (int n : cnt)  ans += (n - 1) * n / 2;
        return ans;
    }
};