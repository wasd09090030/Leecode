/*���� ����ֻ���������� 2��3 �� 5 ����������

����һ������ n �������ж� n �Ƿ�Ϊ ���� ������ǣ����� true �����򣬷��� false ��

 

ʾ�� 1��

���룺n = 6
�����true
���ͣ�6 = 2 �� 3*/
class Solution {
public:
    bool isUgly(int n) {

        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }

        return n == 1;
    }
};
