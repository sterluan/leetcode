class Solution {
public:
	vector<string> findMissingRanges(vector<int> &nums, int lower, int upper) {
		vector<string> res;
		int start = lower;
		for (auto n: nums) {
			process(start, n - 1, res);
			start = n + 1;
		}
		process(start, upper, res);
		return res;
	}

	void process(int start, int end, vector<string> &res) {
		if (start > end) return;
		res.push_back(to_string(start));
		if (end > start) res.back() += ("->" + to_string(end));
	}
};