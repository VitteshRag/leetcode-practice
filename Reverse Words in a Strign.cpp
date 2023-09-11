class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        s.insert(s.end(),' ');
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        return s;
    }
};