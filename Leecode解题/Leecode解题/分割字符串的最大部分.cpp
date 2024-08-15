
/*给你一个由若干 0 和 1 组成的字符串 s ，请你计算并返回将该字符串分割成两个 非空 子字符串（即 左 子字符串和 右 子字符串）所能获得的最大得分。

「分割字符串的得分」为 左 子字符串中 0 的数量加上 右 子字符串中 1 的数量。*/







#include<iostream>
#include<vector>
using namespace std;


//纯暴力，感觉和官方方法差不多
class Solution {
public:
    int maxScore(string s) {
        vector<int> res(s.size());//res[i]表示0-i-1中 0的个数
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