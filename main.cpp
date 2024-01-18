#include <limits>
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int digit = x % 10;
            // Check for integer overflow before updating the result
            if (result > numeric_limits<int>::max() / 10 || 
                result < numeric_limits<int>::min() / 10) {
                return 0;
            }
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};