class Solution {
public:
    int findLUSlength(string a, string b) {
        // abcdabg
        // abcdeee
        int n = a.size(), m = b.size();
        if (n != m) {
            return max(n, m);
        }
        bool diff = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                diff = true;
                break;
            }
        }
        return (diff ? n : -1);
    }
};
