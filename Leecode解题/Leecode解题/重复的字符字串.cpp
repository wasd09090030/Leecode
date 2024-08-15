#include <iostream>
#include <string>

using namespace std;

bool repeatedSubstringPattern(string s) {
    string s2 = s + s;
    string s3 = s2.substr(1, s2.size() - 2);
    return s3.find(s) != string::npos;
}

int main() {
    string s = "abab";
    bool result = repeatedSubstringPattern(s);
    cout << (result ? "true" : "false") << endl;
    return 0;
}

