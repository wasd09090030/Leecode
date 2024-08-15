/*����һ���±�� 0 ��ʼ���ַ������� words ������������left �� right ��

����ַ�����Ԫ����ĸ��ͷ����Ԫ����ĸ��β����ô���ַ�������һ�� Ԫ���ַ��� ������Ԫ����ĸ�� 'a'��'e'��'i'��'o'��'u' ��

���� words[i] ��Ԫ���ַ�������Ŀ������ i �ڱ����� [left, right] �ڡ�

 

ʾ�� 1��

���룺words = ["are","amy","u"], left = 0, right = 2
�����2
���ͣ�
- "are" ��һ��Ԫ���ַ�������Ϊ���� 'a' ��ͷ���� 'e' ��β��
- "amy" ����Ԫ���ַ�������Ϊ��û����Ԫ����ĸ��β��
- "u" ��һ��Ԫ���ַ�������Ϊ���� 'u' ��ͷ���� 'u' ��β��
��������Χ�е�Ԫ���ַ�����ĿΪ 2 ��*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        bool st[128] = { 0 };
        st['a'] = st['e'] = st['i'] = st['o'] = st['u'] = true;

        int ans = 0;

        while (left <= right) {
            if (st[words[left][0]] && st[words[left].back()]) {
                ans++;
            }
            left++;
        }

        return ans;
    }
};