solution 1:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        map<int, bool>m;
        for(int num:nums)
        {
            if(m.find(num)!=m.end())
            {
                    return true;
            }
            m[num]=true ;

        }

        return false;
    }
};


solution 2:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]==nums[i-1])
                return true;
        }

        return false;
    }
};
