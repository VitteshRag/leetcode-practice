class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int c1=0,c2=0,ele1,ele2;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(c1==0 && nums[i]!=ele2)
            {
                c1++;
                ele1=nums[i];
            }
            else if(c2==0 && nums[i]!=ele1)
            {
                c2++;
                ele2=nums[i];
            }
            else if(nums[i]==ele1)
            c1++;
            else if(nums[i]==ele2)
            c2++;
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++)
        {
            if(ele1==nums[i])
            c1++;
            else if(ele2==nums[i])
            c2++;
        }
        if(c1>(int)n/3)
        res.push_back(ele1);
        if(c2>(int)n/3)
        res.push_back(ele2);

        return res;
    }
};