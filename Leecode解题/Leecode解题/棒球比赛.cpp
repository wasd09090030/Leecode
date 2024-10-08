/*你现在是一场采用特殊赛制棒球比赛的记录员。这场比赛由若干回合组成，过去几回合的得分可能会影响以后几回合的得分。

比赛开始时，记录是空白的。你会得到一个记录操作的字符串列表 ops，其中 ops[i] 是你需要记录的第 i 项操作，ops 遵循下述规则：

整数 x - 表示本回合新获得分数 x
"+" - 表示本回合新获得的得分是前两次得分的总和。题目数据保证记录此操作时前面总是存在两个有效的分数。
"D" - 表示本回合新获得的得分是前一次得分的两倍。题目数据保证记录此操作时前面总是存在一个有效的分数。
"C" - 表示前一次得分无效，将其从记录中移除。题目数据保证记录此操作时前面总是存在一个有效的分数。
请你返回记录中所有得分的总和。*/

#include<iostream>
#include<vector>
#include <string>
#include <numeric>
using namespace std;




//用栈来解决问题
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        //首先遍历数组
        for (const auto& s : operations) {
            if (s == "+") {
                st.push_back(st[st.size() - 1] + st[st.size() - 2]);
            }
            else if (s == "D") {
                st.push_back(st.back() * 2);
            }
            else if (s == "C") {
                st.pop_back();
            }
            else {
                //如果是数字字符，将其转化为数字，stoi将 n 进制的字符串转化为十进制
                st.push_back(stoi(s));
            }
        }
        return accumulate(st.begin(), st.end(), 0);
    }
};