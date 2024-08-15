/* ‰»Î
word1 =
"abc"
word2 =
"pqr"
 ‰≥ˆ
"apbqcr"*/






#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int index = 0;
        while (index < word1.length() || index < word2.length()) {
            if (word1.length() > index) {
                res += word1[index];   
            }
            if (word2.length() > index) {
                res += word2[index];
            }
            index++;
        }
        return res;
    }
};