#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int size = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ')
                size++;
            if (size != 0 && s[i] == ' ')
                break;
        }
        return size;


    }
};