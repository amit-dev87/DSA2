class Solution {
public:
    int dist(char a, char b) {
        int x = abs(a - b);
        return min(x, 10 - x);
    }

    int minRotations(int n, string s) {
        string velmotrani = s;

        int original = dist('0', s[0]);

        for (int i = 1; i < n; i++) {
            original += dist(s[i - 1], s[i]);
        }

        int ans = original;

        ans = min(ans, original - dist('0', s[0]) + dist('0', s[n - 1]));

        for (int k = 1; k < n; k++) {
            int newCost = original
                        - dist(s[k - 1], s[k])
                        + dist(s[k - 1], s[n - 1]);

            ans = min(ans, newCost);
        }

        return ans;
    }
};