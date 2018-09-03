class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
      int count=0;
      int length=nums.size();
      for(int i=0;i<length;i++)
      {
          if(nums[i]!=0)
          {
              swap(nums[count],nums[i]);
              count++;
          }
      }
    }
};
