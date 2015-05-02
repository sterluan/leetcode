class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char st[256] = { 0 }, ts[256] = { 0 };
        for (int i = 0; i < s.length(); ++i) {
            if (!st[s[i]]) {
                if (ts[t[i]]) return false;
                st[s[i]] = t[i];
                ts[t[i]] = s[i];
            }
            else if (st[s[i]] != t[i]) return false;
        }
        return true;
    }
};