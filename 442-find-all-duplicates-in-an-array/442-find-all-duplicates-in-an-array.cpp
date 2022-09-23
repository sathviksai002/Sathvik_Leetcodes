class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> res;
        sort(nums.begin(),nums.end());
        for (int duplicatefound = 1 ;duplicatefound < nums.size(); duplicatefound++){
            if(nums[duplicatefound-1] == nums[duplicatefound]){
                res.push_back(nums[duplicatefound]);
            }
        }
        return res;
    }
};