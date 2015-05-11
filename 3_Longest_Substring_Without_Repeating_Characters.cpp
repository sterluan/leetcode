class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.empty()) return 0;
		int res = 1, start_index = 0;
		int t[256] = { 0 };
		for (int i = 0; i < s.length(); ++i) {
			if (t[s[i]] > 0 && t[s[i]] - 1 >= start_index) {
				res = max(res, i - start_index);
				start_index = t[s[i]];
			}
			t[s[i]] = i + 1;
		}
		return max(res, (int)s.length() - start_index);
	}
};