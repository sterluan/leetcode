class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) return true;
        int tmp = 0;
        unordered_set<int> uset;
        uset.insert(n);
        while (n != 1) {
            while (n) {
                tmp += pow(n % 10, 2);
                n /= 10;
            }
            n = tmp;
            tmp = 0;
            if (uset.count(n) > 0) return false;
            uset.insert(n);
        }
        return true;
    }
};
