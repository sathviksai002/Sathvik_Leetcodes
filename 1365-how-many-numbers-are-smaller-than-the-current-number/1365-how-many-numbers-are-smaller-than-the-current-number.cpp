class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        for (int i : nums)
            m[i]++;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = m.find(nums[i]);
            auto xit = m.begin();
            int x = 0;
            while (xit != it)
            {
                x += (xit->second);
                xit++;
            }
            ans.push_back(x);
        }
        return ans;
    }
};