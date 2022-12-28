#include <string>
#include <iostream>

using namespace std;

// 思路：贪心，因为X必定需要一次翻转，因此碰到一个X，以这个X为左端点翻转一次

class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            if (s[i] == 'X') {
                s[i] = '0';
                if (i+1 < n) s[i+1] = '0';
                if (i+2 < n) s[i+2] = '0';
                ans += 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.minimumMoves("XXX") << endl;
    cout << test.minimumMoves("XXOX") << endl;
    cout << test.minimumMoves("OOOO") << endl;
}