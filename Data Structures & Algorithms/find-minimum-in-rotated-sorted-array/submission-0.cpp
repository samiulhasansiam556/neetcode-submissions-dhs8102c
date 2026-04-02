class Solution {
public:
    int findMin(vector<int> &nums) {

        int i =0, m = 0, j = nums.size()-1;

        while(i<j){
           
            m=i+((j-i)/2);

            if(nums[j]<nums[m]){
                i=m+1;
            }else{
                j=m;
            }
        }

        return nums[i];
        
    }
};
