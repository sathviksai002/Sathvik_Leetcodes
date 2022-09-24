class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum = 0;
        int max_element = INT_MIN;
        for(auto i : nums){
            sum+=i;
            max_element = max(max_element,sum);
            if (sum<0)
                sum=0;
        }
        
        return max_element;
    }
};