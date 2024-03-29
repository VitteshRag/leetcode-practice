//Using Sets
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        int mc=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        st.insert(nums[i]);

        for(auto it : st)
        {
            if(st.find(it-1)==st.end())
            {
                int count=1;
                int l=it;
                while(st.find(l+1)!=st.end())
                {
                    l++;
                    count++;
                }
                mc=max(mc,count);
            }
        }

        return mc;
    }

};