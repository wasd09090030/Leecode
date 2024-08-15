// ‰»Î123
// ‰≥ˆ124

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int size = digits.size();
        int t = 0;
        for (int i = size - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            else
                digits[i] = 0;

            t++;
        }



        if (t != size)
            return digits;
        else {
            vector<int>ss(size + 1);
            ss[0] = 1;
            return ss;
        }
    }
};


int main() {
    Solution ss;
    vector<int> ss1 = { 1,2,3 };
    ss.plusOne(ss1);
    for (int s : ss1) {
        cout << s;
    }

}