/*给你一个整数 n，请你判断该整数是否是 2 的幂次方。如果是，返回 true ；否则，返回 false 。

如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。

 

示例 1：

输入：n = 1
输出：true
解释：20 = 1*/

//例子：输入40，取余——》20，再取余——》10，再取余——》5，最后——》1  ！=0，return F;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n == 1) return true;
        if (n == 0) return false;
        if (n % 2 != 0) return false;
        return isPowerOfTwo(n / 2);
    }

};