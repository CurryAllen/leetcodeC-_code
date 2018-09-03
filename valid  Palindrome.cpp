//设置两个指针，分别位于字符串的开头和末尾， 检验头和末尾，如果不是字母和数字就跳过，
//如果是，就比较两者的值，相同就跳过继续检验，遍历完所有后，返回true，中途如果有不相等就 返回false。
class Solution {
public:
    bool isPalindrome(string s)
    {
        int left=0, right=s.size()-1;
        while(left<right) //始终保证右指针大于左指针
    {
        if(!isAlphanum(s[left])) ++left;
        else if(!isAlphanum(s[right])) --right;

        else if((s[left]+32-'a')%32!=(s[right]+32-'a')%32)  return false;  //可以保证相同的大写字母和小写字母得到的值相等。
        else
        {
            ++left;
            --right;
        }


    }

        return true;

    }

    bool isAlphanum(char ch)
    {
        if(ch>='a'&&ch<='z') return true;
        else if(ch>='A'&&ch<='Z') return true;
        else if(ch>='0'&&ch<='9') return true;

        else return false;
    }
};
