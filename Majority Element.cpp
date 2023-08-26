class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count=1;
            }
            else if(nums[i]==ele)
            {
                count++;
            }
            else
            {  
                count--;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele)
            c++;
        }
        if(c>(nums.size()/2))
        return ele;
        
        return -1;
    }
};