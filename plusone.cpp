class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        for(int i=v.size()-1;i>=0;i--)
        {
            if(i==v.size()-1)
            v[i]++;
            if(v[i]==10)
            {
                v[i]=0;
                if(i!=0)
                {
                    v[i-1]++;                    
                }
                else
                {
                    v.push_back(0);
                    v[i]=1;
                }
            }
        }
        return v;
    }
};