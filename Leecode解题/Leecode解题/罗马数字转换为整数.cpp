/*罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。*/



//解法一：特殊情况只有6种，因此可以replace.

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
        //使用 s.find(from) 找到字符串 s 中子字符串 from 的第一个出现位置。
        // 如果 from 存在于 s 中，则返回其起始位置的索引（pos），否则返回 string::npos，表示未找到。
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



//解法二：大体与上面相同，只不过需要添加判断条件
// 当较小的罗马数字在前面时符号改为负号

int main() {
    Solution ss;

    int i = ss.romanToInt("III");
    cout << i << endl;

    return 0;
}
