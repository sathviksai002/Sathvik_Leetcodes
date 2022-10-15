class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0; 
        for(auto x : nums){
            sum+=x;
        }
        int n = nums.size();
        int res = (n * (n+1))/2;
        return res-sum;
        
    }
};