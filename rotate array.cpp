solution 1:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> result=nums;
        int index=0;
        for(int i=0;i<nums.size();++i)
        {
           index=(k+i)%nums.size();
              result[index]=nums[i];
        }

          for(int i=0;i<nums.size();++i)
          {
              nums[i]=result[i];
          }
    }
};

solution 2:
class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
     int n=nums.size();
        k=k%n;

        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);


    }

    void reverse(vector<int>&nums, int begin, int end)
    {
        while(begin<end)
        {
            int tmp=nums[begin];
            nums[begin++]=nums[end];
            nums[end--]=tmp;



        }
    }

};

solution 3£º
class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
     if(nums.empty()||k%nums.size()==0)
        return;

        int length=nums.size();
        int start=0;
        int count=0;
        int i=0;
        int tmp=nums[i];

        while(count++<length)
        {
            i=(i+k)%length;
            int t=nums[i];
            nums[i]=tmp;
            if(i==start)
            {
                ++i;
                ++start;
                tmp=nums[i];
            }
            else
                tmp=t;
        }
    }
};
