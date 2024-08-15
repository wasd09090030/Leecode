/*�������ְ������������ַ�: I�� V�� X�� L��C��D �� M��

�ַ�          ��ֵ
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
���磬 �������� 2 д�� II ����Ϊ�������е� 1 ��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII, ��Ϊ XX + V + II ��

ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������

I ���Է��� V (5) �� X (10) ����ߣ�����ʾ 4 �� 9��
X ���Է��� L (50) �� C (100) ����ߣ�����ʾ 40 �� 90�� 
C ���Է��� D (500) �� M (1000) ����ߣ�����ʾ 400 �� 900��
����һ���������֣�����ת����������*/



//�ⷨһ���������ֻ��6�֣���˿���replace.

#include<iostream>
using namespace std;

#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        replaceSubstrings(s, "IV", "a");
        replaceSubstrings(s, "IX", "b");
        replaceSubstrings(s, "XL", "c");
        replaceSubstrings(s, "XC", "d");
        replaceSubstrings(s, "CD", "e");
        replaceSubstrings(s, "CM", "f");

        int value = 0;
        for (char ss : s) {
            value += getValue(ss);
        }

        return value;
    }

private:
    void replaceSubstrings(string& s, const string& from, const string& to) {
        size_t pos = s.find(from);
        //ʹ�� s.find(from) �ҵ��ַ��� s �����ַ��� from �ĵ�һ������λ�á�
        // ��� from ������ s �У��򷵻�����ʼλ�õ�������pos�������򷵻� string::npos����ʾδ�ҵ���
        while (pos != string::npos)
        {
            s.replace(pos, from.length(), to);
            pos = s.find(from, pos + to.length());
        }
    }

    int getValue(char c) {
        switch (c) {
        case 'I': return 1; break;
        case 'V': return 5; break;
        case 'X': return 10; break;
        case 'L': return 50; break;
        case 'C': return 100; break;
        case 'D': return 500; break;
        case 'M': return 1000; break;
        case 'a': return 4; break;
        case 'b': return 9; break;
        case 'c': return 40; break;
        case 'd': return 90; break;
        case 'e': return 400; break;
        case 'f': return 900; break;
        }
        return 0;
    }
};



//�ⷨ����������������ͬ��ֻ������Ҫ����ж�����
// ����С������������ǰ��ʱ���Ÿ�Ϊ����

int main() {
    Solution ss;

    int i = ss.romanToInt("III");
    cout << i << endl;

    return 0;
}
