class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        set <int> nums1;
        for(auto x : nums){
            nums1.insert(x);
        }
        int n = 0;
        int res = 0;
        for(auto x : nums1){
            n = std::count(nums.begin(),nums.end(),x);
            res += n*(n-1)/2;
        }
        return res;
    }
};