class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i : nums)
        {
            if(hash[i]==1)
            return true;
            hash[i]++;
        }
        return false;
    }
};