class Solution {
public:
    int reverse(int x) {
        vector<int> digits;
        int ans = 0, pm = 1;
        if (x == INT_MIN) return 0;
        if (x < 0) {
            pm = -1;
            x *= -1;
        }
        while (x > 0) {
            digits.push_back(x % 10);
            x /= 10;
        }

        for (int i = 0; i < digits.size(); i++) {
            if (ans > INT_MAX / 10) return 0;
            ans *= 10;
            if (ans > INT_MAX - digits[i]) return 0;
            ans += digits[i];
        }
        ans *= pm;
        return ans;
    }
};