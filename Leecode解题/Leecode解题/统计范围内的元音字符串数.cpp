/*给你一个下标从 0 开始的字符串数组 words 和两个整数：left 和 right 。

如果字符串以元音字母开头并以元音字母结尾，那么该字符串就是一个 元音字符串 ，其中元音字母是 'a'、'e'、'i'、'o'、'u' 。

返回 words[i] 是元音字符串的数目，其中 i 在闭区间 [left, right] 内。

 

示例 1：

输入：words = ["are","amy","u"], left = 0, right = 2
输出：2
解释：
- "are" 是一个元音字符串，因为它以 'a' 开头并以 'e' 结尾。
- "amy" 不是元音字符串，因为它没有以元音字母结尾。
- "u" 是一个元音字符串，因为它以 'u' 开头并以 'u' 结尾。
在上述范围中的元音字符串数目为 2 。*/

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