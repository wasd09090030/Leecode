//t �� s ���һ����ĸ
//˼·�����ASCII���ܺ����
#include<iostream>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ss = 0;
        int ss2 = 0;
        for (char a : s) {
            ss += static_cast<int>(a);
                    }
        for (char a : t) {
            ss2 += static_cast<int>(a);
        }
        return (char)(ss2 - ss);
    }
};