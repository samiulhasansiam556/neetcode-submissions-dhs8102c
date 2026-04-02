class Solution {
public:
    bool isHappy(int n) {


          unordered_set<int> usedIntegers;

        while (true) {
            int sum = 0;

            // Find sum of squares of digits
            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;   // faster than pow
                n /= 10;
            }

            // If becomes 1 → happy number
            if (sum == 1) return true;

            n = sum;

            // If already seen → cycle → not happy
            if (usedIntegers.count(n)) return false;

            usedIntegers.insert(n);
        }
        
    }
};
