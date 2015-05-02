class Solution {
public:
	bool isOneEditDistance(string s, string t) {
		int ls = s.length(), lt = t.length();
		if (abs(ls - lt) > 1) return false;
		bool flag = true;
		int i, j;
		for (i = 0, j = 0; i < ls, j < lt; ) {
			if (s[i] == s[t]) {
				++i;
				++j;
			}
			else {
				if (flag) return false;
				flag = !flag;
				i += (ls >= lt ? 1 : 0);
				j += (lt >= ls ? 1 : 0);
			}
		}
		return flag || i < ls || j < lt;
	}
};