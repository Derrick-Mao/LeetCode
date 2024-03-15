class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // clockwise rotation
        /*
            1 2 3       7 8 9       7 4 1
            4 5 6   ->  4 5 6   ->  8 5 2
            7 8 9       1 2 3       9 6 3
        */

        //reverse rows
        reverse(matrix.begin(), matrix.end());

        //swap [i][j] value and [j][i] value
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix.at(i).size(); ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }


/*
        // counter-clockwise rotation
        
            1 2 3       3 2 1       3 6 9
            4 5 6   ->  6 5 4   ->  2 5 8
            7 8 9       9 8 7       1 4 7
        

        // reverse cols
        for (auto row: matrix) {
            reverse(row.begin(), row.end());
        }

        //swap [i][j] value and [j][i] value
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix.at(i).size(); ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
*/
    }
};