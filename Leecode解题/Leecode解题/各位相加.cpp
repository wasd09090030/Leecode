/*����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ����������������

 

ʾ�� 1:

����: num = 38
���: 2 
����: ��λ��ӵĹ���Ϊ��
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
���� 2 ��һλ�������Է��� 2��*/

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }

        return addDigits(num / 10 + num % 10);

    }
};