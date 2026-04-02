class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowIdx = searchPotentialRow(matrix, target);
        if (rowIdx != -1) {
            return binarySearchOverRow(matrix[rowIdx], target);
        } else {
            return false;
        }
    }

private:
    int searchPotentialRow(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[mid][0] <= target && target <= matrix[mid].back()) {
                return mid;
            } else if (matrix[mid][0] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }

    bool binarySearchOverRow(vector<int>& row, int target) {
        int low = 0;
        int high = row.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (row[mid] == target) {
                return true;
            } else if (row[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }
};
