class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        int max = 0;
        int l, w;
        unsigned int i, j;

        for (i = 0; i < height.size() - 1; ++i) {
            for (j = i + 1; j < height.size(); ++j) {
               l = min(height.at(i), height.at(j));
                w = j - i;
                if (l * w > max) max = l * w;
            }
        }

        return max;
        */

        int front = 0;
        int end = height.size() - 1;
        int h, b;
        int max = -1;

        while (front != end) {
            h = min(height.at(front), height.at(end));
            b = end - front;
            if (h * b > max) max = h * b;
            if (height.at(front) < height.at(end)) ++front;
            else --end;
        }

        return max;
    }
};