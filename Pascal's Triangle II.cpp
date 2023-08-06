class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> result;
        long long f=1;
        n++;
        result.push_back(1);
        for(int i=1;i<n;i++)
        {
            f*=(n-i);
            f/=i;
            result.push_back(f);
        }
        return result;
    }
};