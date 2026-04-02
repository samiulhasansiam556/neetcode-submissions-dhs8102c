class Solution {
public:
    int majorityElement(vector<int>& nums) {
 
        unordered_map<int,int> A;
        for(int i=0;i<nums.size();i++){     
            A[nums[i]]++;
        }
     
        for(int val:nums){     
            if(A[val]>nums.size()/2){
                return val;
            }
        }

        
    }
};