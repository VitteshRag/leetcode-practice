class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=-1,prob=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                index=i;
                break;
            }
            else if(nums[i]>=target)
            {
                prob=i;
                break;
            }
            else
            continue;
        }
        if(index==-1)
        return prob;
        else
        return index;
    }
};