class Solution {
public:
    bool check(vector<int>& nums) {
        int ind=0;
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            ind=i+1;
        }
        for(int i=ind;i<nums.size();i++)
        {
            res.push_back(nums[i]);
        }
        for(int i=0;i<ind;i++)
        {
            res.push_back(nums[i]);
        }
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]>res[i+1])
            return false;
        }
        return true;
    }
};