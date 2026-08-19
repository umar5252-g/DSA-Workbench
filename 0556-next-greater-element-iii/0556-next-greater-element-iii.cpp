class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);

        // 1. Find the first digit from the right
        //    that is smaller than the digit after it.
        int i = s.size() - 2;

        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        // No greater permutation exists
        if (i < 0) {
            return -1;
        }

        // 2. Find the smallest digit on the right
        //    that is greater than s[i].
        int j = s.size() - 1;

        while (s[j] <= s[i]) {
            j--;
        }

        // 3. Swap them
        swap(s[i], s[j]);

        // 4. Reverse everything after i
        //    to make it as small as possible.
        reverse(s.begin() + i + 1, s.end());

        // 5. Convert to long long to check overflow
        long long ans = stoll(s);

        if (ans > INT_MAX) {
            return -1;
        }

        return (int)ans;
    }
};