class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		int l = 0, r = target.size() - 1;
		vector<int> res(2);
		while (l < r) {
			int sum = numbers[l] + numbers[r];
			if (sum == target) {
				res[0] = l + 1;
				res[1] = r + 1;
				break;
			}
			else if (sum < target) ++l;
			else --r;
		}
		return res;
	}
};