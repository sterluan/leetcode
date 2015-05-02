class Solution {
public:
	int rob(vector<int> &num) {
		int n = num.size();
		if (n == 0) return 0;
		int r1 = 0, r2 = num[0], res = num[0];
		for (int i = 1; i < n; ++i) {
			res = max(r1 + num[i], r2);
			r1 = r2;
			r2 = res;
		}
		return res;
	}
};