
/*����һ�������� 0 �� 1 ��ɵ��ַ��� s ��������㲢���ؽ����ַ����ָ������ �ǿ� ���ַ������� �� ���ַ����� �� ���ַ��������ܻ�õ����÷֡�

���ָ��ַ����ĵ÷֡�Ϊ �� ���ַ����� 0 ���������� �� ���ַ����� 1 ��������*/







#include<iostream>
#include<vector>
using namespace std;


//���������о��͹ٷ��������
class Solution {
public:
    int maxScore(string s) {
        vector<int> res(s.size());//res[i]��ʾ0-i-1�� 0�ĸ���
        int sumZero = 0;
        int sumOne = 0;
        for (int i = 1; i < s.size() ; i++) {
            for (int x = i-1; x >= 0; x--) {
                if (s[x] == '0')
                    sumZero++;
            }
            for (int y = i; y < s.length(); y++) {
                if (s[y] == '1')
                    sumOne++;
            }
            res.push_back(sumOne + sumZero);
            sumOne = 0;
            sumZero = 0;
        }
        return *max_element(res.begin(), res.end());

    }
};


int main() {

    Solution ss;
    int x=ss.maxScore("00");
    cout << x;
}