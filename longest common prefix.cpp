// ×ÝÏò±È½Ï
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";

        for(int idx=0;idx<strs[0].size();idx++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][idx]!=strs[0][idx])
                    return strs[0].substr(0,idx);
            }
        }

        return strs[0];


    }
};
