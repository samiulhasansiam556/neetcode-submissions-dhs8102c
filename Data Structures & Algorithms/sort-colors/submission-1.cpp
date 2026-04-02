class Solution {
public:
    void sortColors(vector<int>& nums) {

        unordered_map<int, int> s;

        for (int i = 0; i < nums.size(); i++) {
            s[nums[i]]++;
        }

        int t = 0;

        for (int j = 0; j < s[0]; j++) {
            nums[t++] = 0;
        }


        for (int j = 0; j < s[1]; j++) {
            nums[t++] = 1;
        }

        for (int j = 0; j < s[2]; j++) {
            nums[t++] = 2;
        }
    }
};
