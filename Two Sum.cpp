class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> num=numbers;
        int length=numbers.size();
        int left=0;
        int right=length-1;
        int sum=0;
        std::sort(num.begin(),num.end());
        vector<int> index;


        while(left<right)
        {
            sum=num[left]+num[right];
            if(sum==target)
            {
                for(int i=0;i<length;i++)
                {
                    if(numbers[i]==num[left])
                    {
                        index.push_back(i);
                    }
                    else if(numbers[i]==num[right])
                    {
                        index.push_back(i);
                    }
                    if(index.size()==2)
                    {
                        break;
                    }
                }
                break;
            }
            else if(sum>target)
            {
                right--;
            }
            else
            {
             left++;
            }
        }
        return index;

    }
};
