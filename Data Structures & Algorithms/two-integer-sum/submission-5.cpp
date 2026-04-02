class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         unordered_map<int,int> A;
        
         for(int i=0;i<nums.size();i++){
            int cmp = target - nums[i];

            if(A.find(cmp)!=A.end()){
                return {A[cmp],i};
            }

            A.insert({nums[i],i});
         }

         return{};


    }
};
