#include <string>
#include <iostream>

using namespace std;

// 思路：贪心，找到两边相等的字符串，干掉，再找下一个

class Solution {
public:
    int minimumLength(string s) {
        int n = s.size(), i = 0, j = n-1;
        if (n == 1) {
            return 1;
        }
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                break;
            }
            while (i >= 1 && i < n && s[i] == s[i-1]) i++;
            while (j < n-1 && j >= 0 && s[j] == s[j+1]) j--;
        }
        if (i > j) return 0;
        return j-i+1;
    }
};


int main() {
    Solution test;
    cout << test.minimumLength("bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb") << endl;
}