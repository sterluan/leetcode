class Solution {
public:
	int findPeakElement(vector<int> nums) {
		int l = 0, r = nums.size() - 1, m;
		while (l < r) {
			m = l + (r - l) / 2;
			if (nums[m] > nums[m + 1] && (m == l || nums[m] > nums[m - 1])) {
				return m;
			}
			if (nums[m] < nums[m + 1]) l = m + 1;
			else r = m - 1;
		}
		return l;
	}
};