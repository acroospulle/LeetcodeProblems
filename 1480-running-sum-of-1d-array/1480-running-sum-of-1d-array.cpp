class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        /* 1a. for loop 
           1b. i = 1 and nums[i-1]
           2. addition of an array
           3. return the final answer 
           */
    
        
        for(int i = 1; i < nums.size(); i++) {
            nums[i] +=nums[i-1];
        }
        
        return nums;
    }
};