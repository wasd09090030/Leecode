/*����һ������ n�������жϸ������Ƿ��� 2 ���ݴη�������ǣ����� true �����򣬷��� false ��

�������һ������ x ʹ�� n == 2x ������Ϊ n �� 2 ���ݴη���

 

ʾ�� 1��

���룺n = 1
�����true
���ͣ�20 = 1*/

//���ӣ�����40��ȡ�ࡪ����20����ȡ�ࡪ����10����ȡ�ࡪ����5����󡪡���1  ��=0��return F;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n == 1) return true;
        if (n == 0) return false;
        if (n % 2 != 0) return false;
        return isPowerOfTwo(n / 2);
    }

};