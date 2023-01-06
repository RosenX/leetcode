#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 1; i <= num; i++) {
            int tmp = i, cnt = 0;
            while (tmp > 0) {
                cnt += tmp%10;
                tmp = tmp/10;
            }
            if (!(cnt&1)) ans++;
        }
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.countEven(4) << endl;
}