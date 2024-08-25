class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) {
            return x;
        }

        int low = 1;
        int mid = -1;
        int high = x;

        while (low <= high) {
            mid = low + (high - low) / 2;
            // double square = static_cast<double>(x/mid);
            // if (square < mid) {
            //     high = mid - 1;
            // }

            // else if (square == mid) {
            //     return mid;
            // }

            // else {
            //     low = mid + 1;
            // }

            if (mid < x / mid) {
                low = mid + 1;
            }

            else if (mid > x / mid) {
                high = mid - 1;
            }

            else {
                return mid;
            }
        }

        return high;
    }
};